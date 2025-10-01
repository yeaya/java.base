#ifndef _java_lang_CompoundEnumeration_h_
#define _java_lang_CompoundEnumeration_h_
//$ class java.lang.CompoundEnumeration
//$ extends java.util.Enumeration

#include <java/lang/Array.h>
#include <java/util/Enumeration.h>

namespace java {
	namespace lang {

class CompoundEnumeration : public ::java::util::Enumeration {
	$class(CompoundEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	CompoundEnumeration();
	void init$($Array<::java::util::Enumeration>* enums);
	virtual bool hasMoreElements() override;
	bool next();
	virtual $Object* nextElement() override;
	$Array<::java::util::Enumeration>* enums = nullptr;
	int32_t index = 0;
};

	} // lang
} // java

#endif // _java_lang_CompoundEnumeration_h_