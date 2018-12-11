

all: document.pdf

document.pdf: document.tex
	latexmk document
	pdflatex document

.PHONY: clean
clean:
	$(RM) -f document.lo* document.toc *.aux document.b* document.pdf *.fls *.fdb_latexmk *.dvi
