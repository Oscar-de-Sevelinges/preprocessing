#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void preprocess(string fileName)
{
	fstream ifs(fileName + ".txt");
	if (!ifs)
	{
		runtime_error("fichier " + fileName + " introuvable");
	}

	while (!ifs.eof())
	{
		char c;
		ifs >> c;
	}
}

int main()
{
	vector<string> documents;
	ifstream ifs("dataBase.txt");
	int nbOfDoc;
	string docName;
	if (!ifs)
	{
		runtime_error("fichier dataBase introuvable");
	}
	ifs >> nbOfDoc;
	for (int i = 0; i < nbOfDoc; i++)
	{
		ifs >> docName;
		documents.push_back(docName);
	}

	for (const auto& elem : documents)
	{
		preprocess(elem);
	}
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
