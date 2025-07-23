#pragma once
#include <string>

class IFileIO {
public:
	virtual bool Serialize	(std::string path) = 0;
	virtual bool Deserialize(std::string path) = 0;
	virtual bool Clear		(std::string path) = 0; // empties a file
};

class FileIO : IFileIO {
	/// todo: build on top of this
	/// allow for deriving for EXCEL, PDF, etc.
};