PT=[5 5 5 5 5 4.688 3.4 1.25 0.2 0.1] //Valeur pas touch�
T=[5 5 5 5 5 4.37 1.2 0.3 0.1 0.1] //Valeur touch�
F=[0.5 1 10 50 100 200 300 400 500 600] //Valeur des fr�quence mesur�
a=gca() //a devient l'entr�e des param�tre du graphique
a.grid=[1 1] //la grille s'affiche et sera noir
plot(F,PT,'b.-') //on affiche en bleue reli� et avec des point les valeur pas touch� en fonction de la fr�quence
plot(F,T,'r.-') //on affiche en rouge reli� et avec des point les valeur pas touch� en fonction de la fr�quence
legend("Tension cr�te � cr�te pas touch�","Tension cr�te � cr�te touch�") //on affiche la l�gende des courbe
xtitle("Exercice 1","Frequence (KHz)","Tensions (V)") //on affiche le titre du graphique et le nom des axes
