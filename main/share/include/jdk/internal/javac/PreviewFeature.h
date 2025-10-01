#ifndef _jdk_internal_javac_PreviewFeature_h_
#define _jdk_internal_javac_PreviewFeature_h_
//$ interface jdk.internal.javac.PreviewFeature
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace jdk {
	namespace internal {
		namespace javac {
			class PreviewFeature$Feature;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace javac {

class $import PreviewFeature : public ::java::lang::annotation::Annotation {
	$interface(PreviewFeature, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual ::jdk::internal::javac::PreviewFeature$Feature* feature() {return nullptr;}
	virtual bool reflective() {return false;}
};

		} // javac
	} // internal
} // jdk

#endif // _jdk_internal_javac_PreviewFeature_h_