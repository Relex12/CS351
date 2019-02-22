# usage : gnuplot graph.plt


# par d�faut, affiche � l'�cran
# pour g�n�rer un fichier, d�commenter les lignes appropri�es

# type de fichier
#set term postscript eps
#set term pdf
#set term png

#set output "graph.eps"
#set output "graph.pdf"
#set output "graph.png"

# pour les caract�res accentu�s (en latin 1)
set encoding iso_8859_1

set title "mon titre"
set ylabel "efficacit�"
set xlabel "taux de perte"
plot "log1" w lp title "trace 1", "log2" w lp title "trace 2"

# attend que l'on tape entr�e
pause -1
