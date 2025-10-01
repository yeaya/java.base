#ifndef _Constructor_h_
#define _Constructor_h_
//$ class Constructor
//$ extends java.lang.Object

#include <java/lang/Array.h>

class Constructor$Entry;

class $export Constructor : public ::java::lang::Object {
	$class(Constructor, 0, ::java::lang::Object)
public:
	Constructor();
	void init$();
	static bool hasFtp();
	static void main($StringArray* args);
	static $Array<Constructor$Entry>* fileURLs;
	static $Array<Constructor$Entry>* jarURLs;
	static $Array<Constructor$Entry>* normalHttpURLs;
	static $Array<Constructor$Entry>* abnormalHttpURLs;
	static $Array<Constructor$Entry>* ftpURLs;
};

#endif // _Constructor_h_