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

#ifndef namespace_config_file_input_node_hh
#define namespace_config_file_input_node_hh

/////////////////////////////////////////////////////////////////////////////
// Header Files
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>

/////////////////////////////////////////////////////////////////////////////
// Class Definitions
/////////////////////////////////////////////////////////////////////////////

class ConfigFileInputNode
{
	public:
	            ConfigFileInputNode( );
	            ConfigFileInputNode(    const string newProcessName, 
	                                    const int newProcessTime );
	            ~ConfigFileInputNode( );
	    
	    string  GetProcessName( );
	    int     GetProcessTime( );
	    
	    void    SetProcessName( string newProcessName );
	    void    SetProcessTime( int newProcessTime );
	                                    
	    bool    operator==( const string processName ) const; 
	    
	private:
	    string  aProcessName;
	    int     aProcessTime;
};

bool ConfigFileInputNode::operator==( const string processName ) const
{
    if( aProcessName == processName )
    {
        return true;
    }
    
    return false;
}

#endif