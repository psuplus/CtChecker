input=ccs
DOC=ccs
LATEX=latex

all:
	pdflatex $(input)
	-bibtex $(input)
	pdflatex $(input)
	pdflatex $(input)
# 	dvipdfmx -p letter $(input)

me:
	$(LATEX) $(DOC).tex
	bibtex $(DOC) || echo "OK"
	$(LATEX) $(DOC).tex
	$(LATEX) $(DOC).tex
	dvips -u -j0 -P pdf -t letter -o $(DOC).ps $(DOC)
	ps2pdf14 -dMaxSubsetPct=100 -sPAPERSIZE=letter -dCompatibilityLevel=1.4 -dSubsetFonts=true -dEmbedAllFonts=true -dPDFSETTINGS=/prepress $(DOC).ps

open: $(DOC).pdf
	@$(PDFVIEW) /A "view=FitH&page=1" $(DOC).pdf 2> /dev/null &

kill:
	- pkill AcroRd32

clean:
	rm -f *.ps *.aux *.lof *.lot *.out *.log *.dvi *.bbl *.toc *.blg  *~
