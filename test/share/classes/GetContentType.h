#ifndef _GetContentType_h_
#define _GetContentType_h_
//$ class GetContentType
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GIF_MIME_TYPE")
#undef GIF_MIME_TYPE
#pragma push_macro("JAR_MIME_TYPE")
#undef JAR_MIME_TYPE

class $export GetContentType : public ::java::lang::Object {
	$class(GetContentType, 0, ::java::lang::Object)
public:
	GetContentType();
	void init$();
	static $String* getSpec();
	static void main($StringArray* args);
	static $String* JAR_MIME_TYPE;
	static $String* GIF_MIME_TYPE;
};

#pragma pop_macro("GIF_MIME_TYPE")
#pragma pop_macro("JAR_MIME_TYPE")

#endif // _GetContentType_h_