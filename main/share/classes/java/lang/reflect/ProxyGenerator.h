#ifndef _java_lang_reflect_ProxyGenerator_h_
#define _java_lang_reflect_ProxyGenerator_h_
//$ class java.lang.reflect.ProxyGenerator
//$ extends jdk.internal.org.objectweb.asm.ClassWriter

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ClassWriter.h>

#pragma push_macro("JL_ILLEGAL_ACCESS_EX")
#undef JL_ILLEGAL_ACCESS_EX
#pragma push_macro("JL_NO_SUCH_METHOD_ERROR")
#undef JL_NO_SUCH_METHOD_ERROR
#pragma push_macro("JL_NO_CLASS_DEF_FOUND_ERROR")
#undef JL_NO_CLASS_DEF_FOUND_ERROR
#pragma push_macro("JLR_INVOCATION_HANDLER")
#undef JLR_INVOCATION_HANDLER
#pragma push_macro("LJLR_METHOD")
#undef LJLR_METHOD
#pragma push_macro("JL_NO_SUCH_METHOD_EX")
#undef JL_NO_SUCH_METHOD_EX
#pragma push_macro("JLI_LOOKUP")
#undef JLI_LOOKUP
#pragma push_macro("NAME_LOOKUP_ACCESSOR")
#undef NAME_LOOKUP_ACCESSOR
#pragma push_macro("MJLR_INVOCATIONHANDLER")
#undef MJLR_INVOCATIONHANDLER
#pragma push_macro("JL_CLASS_NOT_FOUND_EX")
#undef JL_CLASS_NOT_FOUND_EX
#pragma push_macro("JLR_PROXY")
#undef JLR_PROXY
#pragma push_macro("LJL_CLASS")
#undef LJL_CLASS
#pragma push_macro("NAME_CTOR")
#undef NAME_CTOR
#pragma push_macro("JL_OBJECT")
#undef JL_OBJECT
#pragma push_macro("JL_CLASS")
#undef JL_CLASS
#pragma push_macro("JLI_METHODHANDLES")
#undef JLI_METHODHANDLES
#pragma push_macro("JL_THROWABLE")
#undef JL_THROWABLE
#pragma push_macro("NAME_CLINIT")
#undef NAME_CLINIT
#pragma push_macro("LJLR_INVOCATION_HANDLER")
#undef LJLR_INVOCATION_HANDLER
#pragma push_macro("JLR_UNDECLARED_THROWABLE_EX")
#undef JLR_UNDECLARED_THROWABLE_EX
#pragma push_macro("EMPTY_CLASS_ARRAY")
#undef EMPTY_CLASS_ARRAY

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
			class ProxyGenerator$ProxyMethod;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class ProxyGenerator : public ::jdk::internal::org::objectweb::asm$::ClassWriter {
	$class(ProxyGenerator, 0, ::jdk::internal::org::objectweb::asm$::ClassWriter)
public:
	ProxyGenerator();
	void init$(::java::lang::ClassLoader* loader, $String* className, ::java::util::List* interfaces, int32_t accessFlags);
	void addProxyMethod(::java::lang::reflect::Method* m, $Class* fromClass);
	void addProxyMethod(::java::lang::reflect::ProxyGenerator$ProxyMethod* pm);
	static void checkReturnTypes(::java::util::List* methods);
	static void collectCompatibleTypes($ClassArray* from, $ClassArray* with, ::java::util::List* list);
	static ::java::util::List* computeUniqueCatchList($ClassArray* exceptions);
	static $String* dotToSlash($String* name);
	$bytes* generateClassFile();
	void generateConstructor();
	void generateLookupAccessor();
	static $bytes* generateProxyClass(::java::lang::ClassLoader* loader, $String* name, ::java::util::List* interfaces, int32_t accessFlags);
	void generateStaticInitializer();
	virtual ::java::lang::ClassLoader* getClassLoader() override;
	static int32_t getWordsPerType($Class* type);
	static ::java::util::List* lambda$addProxyMethod$0($String* f);
	static $StringArray* typeNames(::java::util::List* classes);
	static bool $assertionsDisabled;
	static $String* JL_CLASS;
	static $String* JL_OBJECT;
	static $String* JL_THROWABLE;
	static $String* JL_CLASS_NOT_FOUND_EX;
	static $String* JL_ILLEGAL_ACCESS_EX;
	static $String* JL_NO_CLASS_DEF_FOUND_ERROR;
	static $String* JL_NO_SUCH_METHOD_EX;
	static $String* JL_NO_SUCH_METHOD_ERROR;
	static $String* JLI_LOOKUP;
	static $String* JLI_METHODHANDLES;
	static $String* JLR_INVOCATION_HANDLER;
	static $String* JLR_PROXY;
	static $String* JLR_UNDECLARED_THROWABLE_EX;
	static $String* LJL_CLASS;
	static $String* LJLR_METHOD;
	static $String* LJLR_INVOCATION_HANDLER;
	static $String* MJLR_INVOCATIONHANDLER;
	static $String* NAME_CTOR;
	static $String* NAME_CLINIT;
	static $String* NAME_LOOKUP_ACCESSOR;
	static $ClassArray* EMPTY_CLASS_ARRAY;
	static $String* handlerFieldName;
	static bool saveGeneratedFiles;
	static ::java::lang::reflect::ProxyGenerator$ProxyMethod* hashCodeMethod;
	static ::java::lang::reflect::ProxyGenerator$ProxyMethod* equalsMethod;
	static ::java::lang::reflect::ProxyGenerator$ProxyMethod* toStringMethod;
	::java::lang::ClassLoader* loader = nullptr;
	$String* className = nullptr;
	::java::util::List* interfaces = nullptr;
	int32_t accessFlags = 0;
	::java::util::Map* proxyMethods = nullptr;
	int32_t proxyMethodCount = 0;
};

		} // reflect
	} // lang
} // java

#pragma pop_macro("JL_ILLEGAL_ACCESS_EX")
#pragma pop_macro("JL_NO_SUCH_METHOD_ERROR")
#pragma pop_macro("JL_NO_CLASS_DEF_FOUND_ERROR")
#pragma pop_macro("JLR_INVOCATION_HANDLER")
#pragma pop_macro("LJLR_METHOD")
#pragma pop_macro("JL_NO_SUCH_METHOD_EX")
#pragma pop_macro("JLI_LOOKUP")
#pragma pop_macro("NAME_LOOKUP_ACCESSOR")
#pragma pop_macro("MJLR_INVOCATIONHANDLER")
#pragma pop_macro("JL_CLASS_NOT_FOUND_EX")
#pragma pop_macro("JLR_PROXY")
#pragma pop_macro("LJL_CLASS")
#pragma pop_macro("NAME_CTOR")
#pragma pop_macro("JL_OBJECT")
#pragma pop_macro("JL_CLASS")
#pragma pop_macro("JLI_METHODHANDLES")
#pragma pop_macro("JL_THROWABLE")
#pragma pop_macro("NAME_CLINIT")
#pragma pop_macro("LJLR_INVOCATION_HANDLER")
#pragma pop_macro("JLR_UNDECLARED_THROWABLE_EX")
#pragma pop_macro("EMPTY_CLASS_ARRAY")

#endif // _java_lang_reflect_ProxyGenerator_h_