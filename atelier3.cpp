#include <iostream>
#include <string>
using namespace std;

class Voiture {
public:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // 1. Constructeur par défaut : Initialise tous les attributs avec des valeurs par défaut.
    Voiture() {
        marque = "unkown";
        modele = "unkown";
        annee = 0;
        kilometrage = 0;
        vitesse = 0;
    }

    // 2. Constructeur avec paramètres : Permet d'initialiser la voiture avec une marque, un modèle,une année, un kilométrage et une vitesse initiale.
    Voiture(string mrq, string mdl, int an, float km, float vts) {
        marque = mrq;
        modele = mdl;
        annee = an;
        kilometrage = km;
        vitesse = vts;
    }

    // 3. Méthode accelerer(float valeur) : Incrémente la vitesse actuelle de la voiture en fonction de la valeur passée en paramètre.
    void accelerer(float valeur) {
        vitesse += valeur;
    }

    // 4. Méthode freiner(float valeur) : Diminue la vitesse actuelle de la voiture en fonction de la valeur passée en paramètre, sans que la vitesse ne devienne négative.
    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0) {
            vitesse = 0;
          }
    }

    // 5. Méthode afficherInfo() : Affiche les informations sur la voiture (marque, modèle, année, kilométrage, vitesse).
    void afficherInfo() {
        cout << " la Marque de la voiture : " << marque << endl;
        cout << " le Modèle de la voiture : " << modele << endl;
        cout << "l'Année de fabrication de la voiture : " << annee << endl;
        cout << " le Kilométrage actuel de la voiture  : " << kilometrage << " km" << endl;
        cout << " le Vitesse actuelle de la voiture : " << vitesse << " km/h" << endl;
    }

    // 6. Méthode avancer(float distance) : Incrémente le kilométrage en fonction de la distance passée en paramètre.
    void avancer(float distance) {
        kilometrage += distance;
    }

    // 7. Destructeur : Affiche un message indiquant que la voiture est détruite.
    ~Voiture() {
        cout << "La voiture est détruite." << endl;
    }
};

int main() {
    //par défaut
    Voiture voiture1;
    voiture1.afficherInfo();

    //avec des paramètres
    Voiture voiture2("Mercedess", "ClassA", 2020, 20000, 90);
    voiture2.afficherInfo();

    voiture2.accelerer(30);
    cout << "Après accélération :" << endl;
    voiture2.afficherInfo();

    voiture2.freiner(40);
    cout << "Après freinage :" << endl;
    voiture2.afficherInfo();

    voiture2.avancer(90);
    cout << "Après avoir avancé de 90 km :" << endl;
    voiture2.afficherInfo();

 return 0;
}