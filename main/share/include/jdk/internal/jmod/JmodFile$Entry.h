#ifndef _jdk_internal_jmod_JmodFile$Entry_h_
#define _jdk_internal_jmod_JmodFile$Entry_h_
//$ class jdk.internal.jmod.JmodFile$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NAME_TO_SECTION")
#undef NAME_TO_SECTION

namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jmod {
			class JmodFile$Section;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jmod {

class $import JmodFile$Entry : public ::java::lang::Object {
	$class(JmodFile$Entry, 0, ::java::lang::Object)
public:
	JmodFile$Entry();
	void init$(::java::util::zip::ZipEntry* e);
	virtual bool isDirectory();
	virtual $String* name();
	virtual ::jdk::internal::jmod::JmodFile$Section* section();
	static ::jdk::internal::jmod::JmodFile$Section* section($String* name);
	virtual int64_t size();
	virtual $String* toString() override;
	virtual ::java::util::zip::ZipEntry* zipEntry();
	::java::util::zip::ZipEntry* zipEntry$ = nullptr;
	::jdk::internal::jmod::JmodFile$Section* section$ = nullptr;
	$String* name$ = nullptr;
	static ::java::util::Map* NAME_TO_SECTION;
};

		} // jmod
	} // internal
} // jdk

#pragma pop_macro("NAME_TO_SECTION")

#endif // _jdk_internal_jmod_JmodFile$Entry_h_