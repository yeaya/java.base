#ifndef _java_lang_StackTraceElement_h_
#define _java_lang_StackTraceElement_h_
//$ class java.lang.StackTraceElement
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("BUILTIN_CLASS_LOADER")
#undef BUILTIN_CLASS_LOADER
#pragma push_macro("JDK_NON_UPGRADEABLE_MODULE")
#undef JDK_NON_UPGRADEABLE_MODULE

namespace java {
	namespace lang {
		class Module;
		class StackFrameInfo;
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $export StackTraceElement : public ::java::io::Serializable {
	$class(StackTraceElement, $PRELOAD | $NO_CLASS_INIT, ::java::io::Serializable)
public:
	StackTraceElement();
	void init$($String* declaringClass, $String* methodName, $String* fileName, int32_t lineNumber);
	void init$($String* classLoaderName, $String* moduleName, $String* moduleVersion, $String* declaringClass, $String* methodName, $String* fileName, int32_t lineNumber);
	void init$();
	void computeFormat();
	bool dropClassLoaderName();
	bool dropModuleVersion();
	virtual bool equals(Object$* obj) override;
	$String* getClassLoaderName();
	$String* getClassName();
	$String* getFileName();
	int32_t getLineNumber();
	$String* getMethodName();
	$String* getModuleName();
	$String* getModuleVersion();
	virtual int32_t hashCode() override;
	static void initStackTraceElement(::java::lang::StackTraceElement* element, ::java::lang::StackFrameInfo* sfi);
	static void initStackTraceElements($Array<::java::lang::StackTraceElement>* elements, $Throwable* x);
	static bool isHashedInJavaBase(::java::lang::Module* m);
	bool isNativeMethod();
	static $Array<::java::lang::StackTraceElement>* of($Throwable* x, int32_t depth);
	static ::java::lang::StackTraceElement* of(::java::lang::StackFrameInfo* sfi);
	virtual $String* toString() override;
	$Class* declaringClassObject = nullptr;
	$String* classLoaderName = nullptr;
	$String* moduleName = nullptr;
	$String* moduleVersion = nullptr;
	$String* declaringClass = nullptr;
	$String* methodName = nullptr;
	$String* fileName = nullptr;
	int32_t lineNumber = 0;
	int8_t format = 0;
	static const int8_t BUILTIN_CLASS_LOADER = 1;
	static const int8_t JDK_NON_UPGRADEABLE_MODULE = 2;
	static const int64_t serialVersionUID = (int64_t)0x6109C59A2636DD85;
};

	} // lang
} // java

#pragma pop_macro("BUILTIN_CLASS_LOADER")
#pragma pop_macro("JDK_NON_UPGRADEABLE_MODULE")

#endif // _java_lang_StackTraceElement_h_