set key tmargin top horiz 
set term postscript color #font "Times New Roman"
set output "performance.eps"
set yrange [0:1]
set xrange [0:1]
set xlabel '% codes covered'
set ylabel '% faults located'
set size 1,1

plot "1.plot" using 1:2 with lines title "Pr(n) \\~ loc(n)" ,\
     "3.plot" using 1:2 with lines title "Pr(n) = c = 0.7" ,\
     "4.plot" using 1:2 with lines title "Pr(n) = p( #(n in Path_{suc}) / #(n in Path_{all}) )" ,\
     "5.plot" using 1:2 with lines title "Pr(e) \\~ loc(e)" ,\
     "6.plot" using 1:2 with lines title "Pr(e=(a,b)) = freq(b)-freq(a)" 

!evince performance.eps
!epstopdf performance.eps
