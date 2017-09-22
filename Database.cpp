#include <iostream>
#include <string.h>
#include <vector>
#include <Database.h>

Database::Database() {
	Database::words = { "who", "what", "when", "where", "why", "how", "is", "which", "whose", "whom", "\0" };
	Database::words1 = { "Dave", "Dave Bowman", "SAL", "TMA-1", "Tycho", "TMA-2", "Dr. Chandra", "Frank", "Frank Poole" };
};
Database::~Database() {
	Database::words.resize(0);
	Database::words1.resize(0);
};