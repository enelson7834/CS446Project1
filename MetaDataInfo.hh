/**
@file MetaDataInfo.hh
@author Eugene Nelson
@breif The header file for the MetaDataInfo class.
@version    1.0 Eugene Nelson
            Originally developed ( 9 - 19 - 17 )
*/
/////////////////////////////////////////////////////////////////////////////
// Precompiler Directives 
/////////////////////////////////////////////////////////////////////////////
#ifndef meta_data_info_hh
#define meta_data_info_hh

/////////////////////////////////////////////////////////////////////////////
// Constant Definition 
/////////////////////////////////////////////////////////////////////////////
#define MAX_STR_LEN 30
#define LINE_MAX_LEGNTH 300
#define MESSAGE_MAX_LENGTH 500

/////////////////////////////////////////////////////////////////////////////
// Header Files
/////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <queue>
#include <fstream>
#include <cstring>
#include <stdlib.h>
#include <cstdlib>

//#include "MetaDataInfoNode.hh"
#include "ConfigFileInput.hh"

/////////////////////////////////////////////////////////////////////////////
// Struct Definition
/////////////////////////////////////////////////////////////////////////////
struct MetaDataInfoNode 
{
    char MetaDataCode;
    char* MetaDataDescriptor;
    int NumberOfCycles;
    int ErrorCode;
    
    MetaDataInfoNode( )
    {
        MetaDataDescriptor = new char[ MAX_STR_LEN ];
    }
    MetaDataInfoNode( const MetaDataInfoNode& copyNode )
    {
        MetaDataDescriptor = new char[ MAX_STR_LEN ];

        MetaDataCode = copyNode.MetaDataCode;
        strcpy( MetaDataDescriptor, copyNode.MetaDataDescriptor );
        NumberOfCycles = copyNode.NumberOfCycles;
        ErrorCode = copyNode.ErrorCode;
    }
};

/////////////////////////////////////////////////////////////////////////////
// Class Definition
/////////////////////////////////////////////////////////////////////////////
class MetaDataInfo
{
    public:
        MetaDataInfo( char* fileName );
        ~MetaDataInfo( );

        void ProcessData( ConfigFileInput& configFile );
    protected:
        bool ParseLine( char lineToParse[ ] );
        void RemoveSpaces( char lineToRemoveSpaces[ ] );
        void AdjustLineElements( char lineToAdjust[ ], int positionToAdjust );
        void ProcessErrorCode(  char logSpecification, 
                                char errorCode, 
                                ofstream& logFile );
        void LogOutput( char logSpecification, char* logMessage, 
                        ofstream& logFile );
        void itoa( int inputValue, char* outputString, int base );
        void ReverseString( char* string, int size );
    private:
        queue<MetaDataInfoNode> aQueueOfMetaData;
};

#endif
