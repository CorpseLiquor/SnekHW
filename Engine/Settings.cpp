#include "Settings.h"
#include <fstream>
#include <windows.h>
#include <debugapi.h>

Settings::Settings(std::string filename) {
	std::ifstream in( filename );
	std::string line;

	while ( in.good() ) {
		std::getline( in, line );

		if ( line == "[Tile Size]" ) {
			OutputDebugStringA( line.c_str() );
			in >> TileSize;
			OutputDebugStringA( "\ntileSize: " );
			OutputDebugStringA( std::to_string( TileSize ).c_str() );
			OutputDebugStringA( "\n\n" );
		} else if (line == "[Board Size]" ) {
			in >> BoardX >> BoardY;
			OutputDebugStringA( line.c_str() );
			OutputDebugStringA( "\nboardX: " );
			OutputDebugStringA( std::to_string( BoardX ).c_str() );
			OutputDebugStringA( "\nboardY: " );
			OutputDebugStringA( std::to_string( BoardY ).c_str() );
			OutputDebugStringA( "\n\n" );
		} else if ( line == "[Speedup Rate]" ) {
			in >> SpeedUpRate;
			OutputDebugStringA( line.c_str() );
			OutputDebugStringA( "\nspeedUpRate: " );
			OutputDebugStringA( std::to_string( SpeedUpRate ).c_str() );
			OutputDebugStringA( "\n\n" );
		} else if ( line == "[Poison Amount]" ) {
			in >> PoisonAmount;
			OutputDebugStringA( line.c_str() );
			OutputDebugStringA( "\npoisonAmount: " );
			OutputDebugStringA( std::to_string( PoisonAmount ).c_str() );
			OutputDebugStringA( "\n\n" );
		} else if ( line == "[Goal Amount]" ) {
			in >> GoalAmount;
			OutputDebugStringA( line.c_str() );
			OutputDebugStringA( "\ngoalAmount: " );
			OutputDebugStringA( std::to_string( GoalAmount ).c_str() );
			OutputDebugStringA( "\n\n" );
		}
	}

	in.close();
}