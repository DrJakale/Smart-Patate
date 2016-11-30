PT=[5 5 5 5 5 4.688 3.4 1.25 0.2 0.1] //Valeur pas touché
T=[5 5 5 5 5 4.37 1.2 0.3 0.1 0.1] //Valeur touché
F=[0.5 1 10 50 100 200 300 400 500 600] //Valeur des fréquence mesuré
a=gca() //a devient l'entrée des paramètre du graphique
a.grid=[1 1] //la grille s'affiche et sera noir
plot(F,PT,'b.-') //on affiche en bleue relié et avec des point les valeur pas touché en fonction de la fréquence
plot(F,T,'r.-') //on affiche en rouge relié et avec des point les valeur pas touché en fonction de la fréquence
legend("Tension crête à crête pas touché","Tension crête à crête touché") //on affiche la légende des courbe
xtitle("Exercice 1","Frequence (KHz)","Tensions (V)") //on affiche le titre du graphique et le nom des axes
