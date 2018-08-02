#pragma once

#include <string>

class Settings {
public:
	Settings(std::string filename );
	Settings( const Settings& ) = delete;
	Settings& operator=( const Settings& ) = delete;
	int TileSize;
	int BoardX;
	int BoardY;
	float SpeedUpRate;
	int PoisonAmount;
	int GoalAmount;
private:
	/********************************/
	/*  User Functions              */
	/********************************/
private:
	/********************************/
	/*  User Variables              */
	/********************************/

};