#ifndef _java_lang_ProcessBuilder$Redirect_h_
#define _java_lang_ProcessBuilder$Redirect_h_
//$ class java.lang.ProcessBuilder$Redirect
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INHERIT")
#undef INHERIT
#pragma push_macro("DISCARD")
#undef DISCARD
#pragma push_macro("NULL_FILE")
#undef NULL_FILE
#pragma push_macro("PIPE")
#undef PIPE

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class ProcessBuilder$Redirect$Type;
	}
}

namespace java {
	namespace lang {

class $export ProcessBuilder$Redirect : public ::java::lang::Object {
	$class(ProcessBuilder$Redirect, 0, ::java::lang::Object)
public:
	ProcessBuilder$Redirect();
	void init$();
	virtual bool append();
	static ::java::lang::ProcessBuilder$Redirect* appendTo(::java::io::File* file);
	virtual bool equals(Object$* obj) override;
	virtual ::java::io::File* file();
	static ::java::lang::ProcessBuilder$Redirect* from(::java::io::File* file);
	virtual int32_t hashCode() override;
	static ::java::lang::ProcessBuilder$Redirect* to(::java::io::File* file);
	virtual ::java::lang::ProcessBuilder$Redirect$Type* type() {return nullptr;}
	static bool $assertionsDisabled;
	static ::java::io::File* NULL_FILE;
	static ::java::lang::ProcessBuilder$Redirect* PIPE;
	static ::java::lang::ProcessBuilder$Redirect* INHERIT;
	static ::java::lang::ProcessBuilder$Redirect* DISCARD;
};

	} // lang
} // java

#pragma pop_macro("INHERIT")
#pragma pop_macro("DISCARD")
#pragma pop_macro("NULL_FILE")
#pragma pop_macro("PIPE")

#endif // _java_lang_ProcessBuilder$Redirect_h_