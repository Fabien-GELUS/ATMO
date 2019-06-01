/*************************************************************************
Main  -  description
-------------------
d�but                : ${date}
copyright            : (C) ${year} par ${user}
*************************************************************************/

//---------- R�alisation de la classe <Capteur> (fichier Capteur.h) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TraitementDonnees.h"
#include "Date.h"
#include "Capteur.h"
#include "Zone.h"
#include "CoordonneesGPS.h"
#include "Menu.h"
#include "Parseur.h"
#include <vector>
//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques

int main(int argc, char** argv) {
	Menu menu;
	Parseur parseur;
	//TraitementD;

	menu.InitialiserMenu();

	



	/*
	collectionCapteurs v = TraitementD.ParcoursCapteurs(18.902680, -60.469614);
	cout << "taille : " << v.size() << endl;
	cout << v[0].getId() << endl;

	collectionCapteurs v2 = TraitementD.ParcoursCapteurs(-38, -24, 2500);
	cout << "taille : " << v2.size() << endl;
	for (collectionCapteurs::iterator it = v2.begin(); it != v2.end(); ++it) {
		cout << it->getId() << " " << it->getLat() << " " << it->getLong() << endl;
	}*/

	//TEST parcoursCapteurs avec zone
	/*collectionCapteurs capteursPoint;
	capteursPoint = TraitementD.ParcoursCapteurs(-2.03317773855905, -70.6545565746047, 3000);
	cout << capteursPoint.size() << endl;
	for (collectionCapteurs::iterator it = capteursPoint.begin(); it != capteursPoint.end(); ++it) {
		cout << it->getLat() << " " << it->getLong() << endl;
	}*/

	//TEST parcoursCapteurs avec point
	/*collectionCapteurs capteursPoint;
	capteursPoint = TraitementD.ParcoursCapteurs(-2.03317773855905, -70.6545565746047);
	cout << capteursPoint.size() << endl;
	for (collectionCapteurs::iterator it = capteursPoint.begin(); it != capteursPoint.end(); ++it) {
		cout << it->getLat() << " " << it->getLong() << endl;
	}*/

	//TEST appartenance a une zone
	/*Zone z(45.746857, 4.827419, 10);
	cout << z.estDansZone(45.746857, 4.827419) << endl;*/

	//TEST calcul distance GPS
	//CoordonneesGPS cGPS;
	//cout << cGPS.distanceEnKmEntreDeuxPoints(-19.4789835505555, -35.2425725968753, -38.3884286616875, -24.9593580676985) << endl;

	//TEST ParcoursMesures avec parametres
	/*
	string deb = "2017-01-01T00:00:10.0100000;";
	string f = "2017-01-01T00:00:25.5880000;";
	Date debut(deb);
	Date fin(f);

	collectionCapteurs tousLesCapteurs = TraitementD.ParcoursCapteurs();
	collectionCapteurs capteurs;
	capteurs.push_back(tousLesCapteurs[1]);
	capteurs.push_back(tousLesCapteurs[2]);
	capteurs.push_back(tousLesCapteurs[3]);

	collectionMesures m = TraitementD.ParcoursMesures(capteurs, debut, fin);

	cout << "taille mesures filtr�es : " << m.size() << endl;
	for (collectionMesures::iterator it = m.begin(); it != m.end(); ++it) {
		cout << *it << endl;
	}*:

	//TEST LECTURE TYPE MESURES
	/*TraitementD.lectureTypesMesure();
	for (collectionTypesMesure::iterator it = typeMesures.begin(); it != typeMesures.end(); ++it) {
		it->afficher();
	}*/
	return 0;
}

//------------------------------------------------- Surcharge d'op�rateurs

//-------------------------------------------- Constructeurs - destructeur


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es


