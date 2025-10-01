#ifndef _UriImportExport_h_
#define _UriImportExport_h_
//$ class UriImportExport
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}

class $export UriImportExport : public ::java::lang::Object {
	$class(UriImportExport, 0, ::java::lang::Object)
public:
	UriImportExport();
	void init$();
	static void main($StringArray* args);
	static void testBadUri($String* s);
	static void testPath($String* s);
	static void testPath($String* s, $String* expectedUri);
	static void testUri($String* s);
	static ::java::io::PrintStream* log;
	static int32_t failures;
};

#endif // _UriImportExport_h_