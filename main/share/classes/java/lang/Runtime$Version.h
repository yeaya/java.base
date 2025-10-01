#ifndef _java_lang_Runtime$Version_h_
#define _java_lang_Runtime$Version_h_
//$ class java.lang.Runtime$Version
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class List;
		class Optional;
	}
}

namespace java {
	namespace lang {

class $export Runtime$Version : public ::java::lang::Comparable {
	$class(Runtime$Version, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	Runtime$Version();
	void init$(::java::util::List* unmodifiableListOfVersions, ::java::util::Optional* pre, ::java::util::Optional* build, ::java::util::Optional* optional);
	::java::util::Optional* build();
	int32_t compare(::java::lang::Runtime$Version* obj, bool ignoreOpt);
	int32_t compareBuild(::java::lang::Runtime$Version* obj);
	int32_t compareOptional(::java::lang::Runtime$Version* obj);
	int32_t comparePre(::java::lang::Runtime$Version* obj);
	int32_t compareTo(::java::lang::Runtime$Version* obj);
	virtual int32_t compareTo(Object$* obj) override;
	int32_t compareToIgnoreOptional(::java::lang::Runtime$Version* obj);
	int32_t compareVersion(::java::lang::Runtime$Version* obj);
	virtual bool equals(Object$* obj) override;
	bool equalsIgnoreOptional(Object$* obj);
	int32_t feature();
	virtual int32_t hashCode() override;
	int32_t interim();
	static bool isSimpleNumber($String* s);
	static void lambda$toString$0(::java::lang::StringBuilder* sb, $String* v);
	int32_t major();
	int32_t minor();
	::java::util::Optional* optional();
	static ::java::lang::Runtime$Version* parse($String* s);
	int32_t patch();
	::java::util::Optional* pre();
	int32_t security();
	virtual $String* toString() override;
	int32_t update();
	::java::util::List* version();
	::java::util::List* version$ = nullptr;
	::java::util::Optional* pre$ = nullptr;
	::java::util::Optional* build$ = nullptr;
	::java::util::Optional* optional$ = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Runtime$Version_h_