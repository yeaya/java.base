#ifndef _TIFFContentGuesser_h_
#define _TIFFContentGuesser_h_
//$ class TIFFContentGuesser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BIG_ENDIAN_MAGIC")
#undef BIG_ENDIAN_MAGIC
#pragma push_macro("LITTLE_ENDIAN_MAGIC")
#undef LITTLE_ENDIAN_MAGIC
#pragma push_macro("TIFF_MIME_TYPE")
#undef TIFF_MIME_TYPE

class $export TIFFContentGuesser : public ::java::lang::Object {
	$class(TIFFContentGuesser, 0, ::java::lang::Object)
public:
	TIFFContentGuesser();
	void init$();
	static void main($StringArray* args);
	static $bytes* LITTLE_ENDIAN_MAGIC;
	static $bytes* BIG_ENDIAN_MAGIC;
	static $String* TIFF_MIME_TYPE;
};

#pragma pop_macro("BIG_ENDIAN_MAGIC")
#pragma pop_macro("LITTLE_ENDIAN_MAGIC")
#pragma pop_macro("TIFF_MIME_TYPE")

#endif // _TIFFContentGuesser_h_