#ifndef _indify_Indify$Loader_h_
#define _indify_Indify$Loader_h_
//$ class indify.Indify$Loader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

namespace indify {
	class Indify;
}
namespace java {
	namespace io {
		class File;
	}
}

namespace indify {

class Indify$Loader : public ::java::lang::ClassLoader {
	$class(Indify$Loader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	Indify$Loader();
	using ::java::lang::ClassLoader::findClass;
	void init$(::indify::Indify* this$0);
	void init$(::indify::Indify* this$0, ::java::lang::ClassLoader* parent);
	virtual $Class* findClass($String* name) override;
	::java::io::File* findClassInPath($String* name);
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name, bool resolve) override;
	$Class* transformAndLoadClass(::java::io::File* f);
	::indify::Indify* this$0 = nullptr;
};

} // indify

#endif // _indify_Indify$Loader_h_