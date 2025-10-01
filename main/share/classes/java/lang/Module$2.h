#ifndef _java_lang_Module$2_h_
#define _java_lang_Module$2_h_
//$ class java.lang.Module$2
//$ extends java.lang.ClassLoader

#include <java/lang/Array.h>
#include <java/lang/ClassLoader.h>

namespace java {
	namespace lang {
		class Module;
	}
}

namespace java {
	namespace lang {

class Module$2 : public ::java::lang::ClassLoader {
	$class(Module$2, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	Module$2();
	using ::java::lang::ClassLoader::findClass;
	void init$(::java::lang::Module* this$0, ::java::lang::ClassLoader* parent, $bytes* val$bytes);
	virtual $Class* findClass($String* cn) override;
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* cn, bool resolve) override;
	::java::lang::Module* this$0 = nullptr;
	$bytes* val$bytes = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Module$2_h_