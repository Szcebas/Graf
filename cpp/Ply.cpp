#include "../include/Ply.h"

Ply::Ply(string fname)
{
    plyFileName = fname;
    string line;
    ifstream PLYfile(fname);

    while (getline(PLYfile, line))
    {
        vector<string> elems = this->split(line, " ");
        if (!elems.empty())
        {
            if (elems[0] == "end_header")
            {
                break;
            }
        }
    }

    while (getline(PLYfile, line))
    {
        vector<string> elems = this->split(line, " ");
        if (!elems.empty())
        {

            if (elems.size() == 3)
            {
                float x = stof(elems[0]);
                float y = stof(elems[1]);
                float z = stof(elems[2]);
                vertex v(x, y, z);
                this->vertices.push_back(v);
            }
            else
            {
                vector<int> ind = {};
                for (size_t j = 1; j < elems.size(); ++j)
                {
                    ind.push_back(stoi(elems[j]));
                }
                Face f(ind);
                this->faces.push_back(f);
            }
        }
    }
}

vector<string> Ply::split(const string &str, const string &delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if (pos == string::npos)
            pos = str.length();
        string token = str.substr(prev, pos - prev);
        if (!token.empty())
            tokens.push_back(token);
        prev = pos + delim.length();
    } while (pos < str.length() && prev < str.length());

    return tokens;
}

void Ply::info() const
{
    cout << "Archivo : " << plyFileName << endl;
    cout << "Vertices: " << vertices.size() << endl;
    cout << "Caras: " << faces.size() << endl;
}