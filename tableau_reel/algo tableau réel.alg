<?xml version="1.0" encoding="UTF-8"?>
<Algo>
    <description courant="AFFICHER &quot;Ordre décroissante: &quot;" texte="Algorithme demandant à l'utilisateur de saisir la valeur d'un entier n &#xa;d'entrer une série de n entiers &#xa;de calculer la somme et la moyenne de ces n entiers &#xa;d'afficher la valeur minimum et la valeur maximum avec leurs posiitions &#xa;ranger par ordre croissante et décroissante "/>
    <extension extnom="inactif"/>
    <fonction fctcode="" fctetat="inactif"/>
    <F2 F2lignes="" F2para="" F2defaut="" F2etat="inactif"/>
    <repere repcode="-10#10#-10#10#2#2" repetat="inactif"/>
    <param totalAffichages="1000" nbDecimales="8" arrondiAuto="vrai" epaisseurLigne="2" maxBoucle="500000" totalBoucles="5000000" epaisseurPoint="2"/>
    <item algoitem="FONCTIONS_UTILISEES" code="200#declarationfonctions"/>
    <item algoitem="VARIABLES" code="100#declarationsvariables">
        <item algoitem="n EST_DU_TYPE NOMBRE" code="1#NOMBRE#n"/>
        <item algoitem="v EST_DU_TYPE LISTE" code="1#LISTE#v"/>
        <item algoitem="somme EST_DU_TYPE NOMBRE" code="1#NOMBRE#somme"/>
        <item algoitem="m EST_DU_TYPE NOMBRE" code="1#NOMBRE#m"/>
        <item algoitem="i EST_DU_TYPE NOMBRE" code="1#NOMBRE#i"/>
        <item algoitem="min EST_DU_TYPE NOMBRE" code="1#NOMBRE#min"/>
        <item algoitem="max EST_DU_TYPE NOMBRE" code="1#NOMBRE#max"/>
        <item algoitem="rang EST_DU_TYPE NOMBRE" code="1#NOMBRE#rang"/>
        <item algoitem="u EST_DU_TYPE NOMBRE" code="1#NOMBRE#u"/>
    </item>
    <item algoitem="DEBUT_ALGORITHME" code="101#debutalgo">
        <item algoitem="LIRE n" code="2#n#pasliste"/>
        <item algoitem="somme PREND_LA_VALEUR 0" code="5#somme#0#pasliste"/>
        <item algoitem="POUR i ALLANT_DE 0 A n-1" code="12#i#0#n-1">
            <item algoitem="DEBUT_POUR" code="13#debutpour"/>
            <item algoitem="LIRE v[i]" code="2#v#i"/>
            <item algoitem="somme PREND_LA_VALEUR somme+v[i]" code="5#somme#somme+v[i]#pasliste"/>
            <item algoitem="FIN_POUR" code="14#finpour"/>
        </item>
        <item algoitem="AFFICHER &quot;somme=&quot;" code="4#somme=#0"/>
        <item algoitem="AFFICHER somme" code="3#somme#1#pasliste"/>
        <item algoitem="m PREND_LA_VALEUR somme/n" code="5#m#somme/n#pasliste"/>
        <item algoitem="AFFICHER &quot;moyenne=&quot;" code="4#moyenne=#0"/>
        <item algoitem="AFFICHER m" code="3#m#1#pasliste"/>
        <item algoitem="min PREND_LA_VALEUR v[0]" code="5#min#v[0]#pasliste"/>
        <item algoitem="max PREND_LA_VALEUR v[0]" code="5#max#v[0]#pasliste"/>
        <item algoitem="POUR i ALLANT_DE 0 A n-1" code="12#i#0#n-1">
            <item algoitem="DEBUT_POUR" code="13#debutpour"/>
            <item algoitem="SI (v[i]&lt;min) ALORS" code="6#v[i]&lt;min">
                <item algoitem="DEBUT_SI" code="7#debutsi"/>
                <item algoitem="min PREND_LA_VALEUR v[i]" code="5#min#v[i]#pasliste"/>
                <item algoitem="FIN_SI" code="8#finsi"/>
            </item>
            <item algoitem="SI (v[i]>max ) ALORS" code="6#v[i]>max ">
                <item algoitem="DEBUT_SI" code="7#debutsi"/>
                <item algoitem="max PREND_LA_VALEUR v[i]" code="5#max#v[i]#pasliste"/>
                <item algoitem="FIN_SI" code="8#finsi"/>
            </item>
            <item algoitem="FIN_POUR" code="14#finpour"/>
        </item>
        <item algoitem="AFFICHER &quot;la valeur minimum:&quot;" code="4#la valeur minimum:#0"/>
        <item algoitem="AFFICHER min" code="3#min#1#pasliste"/>
        <item algoitem="AFFICHER &quot;la valeur maximum:&quot;" code="4#la valeur maximum:#0"/>
        <item algoitem="AFFICHER max" code="3#max#1#pasliste"/>
        <item algoitem="POUR i ALLANT_DE 0 A n-1" code="12#i#0#n-1">
            <item algoitem="DEBUT_POUR" code="13#debutpour"/>
            <item algoitem="SI (v[i]==min) ALORS" code="6#v[i]==min">
                <item algoitem="DEBUT_SI" code="7#debutsi"/>
                <item algoitem="AFFICHER &quot;la position de la valeur minimum:&quot;" code="4#la position de la valeur minimum:#0"/>
                <item algoitem="AFFICHER i" code="3#i#1#pasliste"/>
                <item algoitem="FIN_SI" code="8#finsi"/>
            </item>
            <item algoitem="SI (v[i]==max) ALORS" code="6#v[i]==max">
                <item algoitem="DEBUT_SI" code="7#debutsi"/>
                <item algoitem="AFFICHER &quot;la position de la valeur maximum :&quot;" code="4#la position de la valeur maximum :#0"/>
                <item algoitem="AFFICHER i" code="3#i#1#pasliste"/>
                <item algoitem="FIN_SI" code="8#finsi"/>
            </item>
            <item algoitem="FIN_POUR" code="14#finpour"/>
        </item>
        <item algoitem="POUR i ALLANT_DE 0 A n-1" code="12#i#0#n-1">
            <item algoitem="DEBUT_POUR" code="13#debutpour"/>
            <item algoitem="POUR u ALLANT_DE i+1 A n-1" code="12#u#i+1#n-1">
                <item algoitem="DEBUT_POUR" code="13#debutpour"/>
                <item algoitem="SI (v[i]>v[u]) ALORS" code="6#v[i]>v[u]">
                    <item algoitem="DEBUT_SI" code="7#debutsi"/>
                    <item algoitem="rang PREND_LA_VALEUR v[i]" code="5#rang#v[i]#pasliste"/>
                    <item algoitem="v[i] PREND_LA_VALEUR v[u]" code="5#v#v[u]#i"/>
                    <item algoitem="v[u] PREND_LA_VALEUR rang" code="5#v#rang#u"/>
                    <item algoitem="FIN_SI" code="8#finsi"/>
                </item>
                <item algoitem="FIN_POUR" code="14#finpour"/>
            </item>
            <item algoitem="FIN_POUR" code="14#finpour"/>
        </item>
        <item algoitem="AFFICHER &quot;Ordre croissant:&quot;" code="4#Ordre croissant:#1"/>
        <item algoitem="POUR i ALLANT_DE 0 A n-1" code="12#i#0#n-1">
            <item algoitem="DEBUT_POUR" code="13#debutpour"/>
            <item algoitem="AFFICHER v[i]" code="3#v#1#i"/>
            <item algoitem="FIN_POUR" code="14#finpour"/>
        </item>
        <item algoitem="POUR i ALLANT_DE 0 A n-1" code="12#i#0#n-1">
            <item algoitem="DEBUT_POUR" code="13#debutpour"/>
            <item algoitem="POUR u ALLANT_DE i+1 A n-1" code="12#u#i+1#n-1">
                <item algoitem="DEBUT_POUR" code="13#debutpour"/>
                <item algoitem="SI (v[i]&lt;v[u]) ALORS" code="6#v[i]&lt;v[u]">
                    <item algoitem="DEBUT_SI" code="7#debutsi"/>
                    <item algoitem="rang PREND_LA_VALEUR v[i]" code="5#rang#v[i]#pasliste"/>
                    <item algoitem="v[i] PREND_LA_VALEUR v[u]" code="5#v#v[u]#i"/>
                    <item algoitem="v[u] PREND_LA_VALEUR rang" code="5#v#rang#u"/>
                    <item algoitem="FIN_SI" code="8#finsi"/>
                </item>
                <item algoitem="FIN_POUR" code="14#finpour"/>
            </item>
            <item algoitem="FIN_POUR" code="14#finpour"/>
        </item>
        <item algoitem="AFFICHER &quot;Ordre décroissante: &quot;" code="4#Ordre décroissante: #1"/>
        <item algoitem="POUR i ALLANT_DE 0 A n-1" code="12#i#0#n-1">
            <item algoitem="DEBUT_POUR" code="13#debutpour"/>
            <item algoitem="AFFICHER v[i]" code="3#v#1#i"/>
            <item algoitem="FIN_POUR" code="14#finpour"/>
        </item>
    </item>
    <item algoitem="FIN_ALGORITHME" code="102#finalgo"/>
</Algo>
