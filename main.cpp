///Header Datein einbinde
//#include <irrlicht.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>


///Andere Präprozessor Direktieven
/**Irrlicht.dll Datei einbinden*/


///Namensräume deklarieren
/**Namensräume für Irrlicht*/
/*using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;*/

/**Allgemeine Namensräume*/
using std::cout;
using std::endl;
using namespace std;

/*int **pMatrix;
int spalten;
int zeilen;

bool newMatrix(int funcLine, int funcColumn)
    {
        spalten = funcLine;
        zeilen = funcColumn;
        pMatrix = (int**) calloc(funcLine, sizeof(int*));

        if(pMatrix == NULL)
        {
            return false;
        }

        for(int i = 0; i < funcColumn; i++)
        {
            pMatrix[i] = (int*) calloc(funcColumn, sizeof(int));

            if(pMatrix[i] == NULL)
            {
                return false;
            }
        }
        return true;
    }

void delMatrix()
    {
        cout << '\n';
        for(int i = 0; i < zeilen; i++)
        {
            free(pMatrix[i]);
            cout << "Erfolgreiches loeschen von Zeile: " << i << '\n';
        }
        cout << '\n';

        free(pMatrix);
        zeilen = 0;
        spalten = 0;
    }
*/
int main()
{
    /*
    ///Probe Ausgabe
    cout << "Bis hierhin Fehlerfrei!" << endl;

    ///Device erstellen
    IrrlichtDevice *device = createDevice( video::EDT_OPENGL, dimension2d<u32>(640, 480), 16, false, false, false, 0);

    if(device == 0)
    {
        return 1;
    }

    ///Window bechriften
    device->setWindowCaption(L"Hello World");

    ///Pointer Für paar Sachen
    IVideoDriver* driver = device->getVideoDriver();
    ISceneManager* smgr = device->getSceneManager();
    IGUIEnvironment* guienv = device->getGUIEnvironment();

    ///Text-Label einfügen
    guienv->addStaticText(L"Hello World! This is the Irrlicht Software renderer!",
		rect<s32>(10,10,260,22), true);

    ///3D Objekt einfügen
    IAnimatedMesh* mesh = smgr->getMesh("D:/Irrlicht/irrlicht-1.7.1/media/sydney.md2");
    if(!mesh)
    {
        device->drop();
        return 1;
    }
    IAnimatedMeshSceneNode* node = smgr->addAnimatedMeshSceneNode(mesh);

    ///Aussehen verändern
    if(node)
    {
        node->setMaterialFlag(EMF_LIGHTING, false);
        node->setMD2Animation(EMAT_STAND);
        node->setMaterialTexture(0, driver->getTexture("D:/Irrlicht/irrlicht-1.7.1/media/sydney.bmp"));
    }

    ///Kameraeinstellungen vornehmen
    smgr->addCameraSceneNode(0, vector3df(0, 30, -40), vector3df(0, 5, 0));

    ///Bewegung in einer Schleife Starten die bis zum schließen des Fensters andauert
    while(device->run())
    {
        driver->beginScene(true, true, SColor(255, 100, 101, 140));

        smgr->drawAll();
        guienv->drawAll();

        driver->endScene();
    }

    device->drop();

    std::string ipadresse;

    cin >> ipadresse;
    const char* cstripadresse = "ping ";
    system("PING LOCALHOST");
    system("PAUSE");
    */

    /*SetConsoleTitle("Test");
    int i = 12;

    while(true)
    {
        cout << i << " " << &i << endl;
        system("Pause");
        cout << i << " " << &i << endl;
        system("Pause");
        return 0;
    }*/

    /*system("Pause");

    if(!newMatrix(10000,40000))
        return 2;

    system("Pause");

    delMatrix();*/

    /*char c[100];
    char input;
    int i = 0;
    puts ("Enter text. Include a dot ('.') in a sentence to exit:");
    do
    {
        input = getc(stdin);
        c[i] = input;
        i++;
    }while (input != '.');
    cout << c << endl;
    return 0;*/

    for (int i = 0; i < 300; i++)
    {
        cout << i << endl;
    }
}
