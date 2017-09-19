/**<
Configuration file input nodes.

Nodes will store information from the configuration file and parse
the config file to retrieve necessary information.

@file ConfigFileInputNode.hh
@author Eugene Nelson
@data 9/18/17
@version 1.0 (Eugene Nelson 9/18/17)
*/
/////////////////////////////////////////////////////////////////////////////
// File Definitions
/////////////////////////////////////////////////////////////////////////////

#ifndef namespace_config_file_input_hh
#define namespace_config_file_input_hh

/////////////////////////////////////////////////////////////////////////////
// Header Files
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
#include "LinkedList.hh"
#include "ConfigFileInputNode.hh"

/////////////////////////////////////////////////////////////////////////////
// Namespace Declaration
/////////////////////////////////////////////////////////////////////////////

using namespace std;

/////////////////////////////////////////////////////////////////////////////
// Class Definitions
/////////////////////////////////////////////////////////////////////////////

class ConfigFileInput
{
    public:
    private:
        string aFilePath;
        LinkedList<ConfigFileInputNode> aListOfProcesses;
};