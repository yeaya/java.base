#ifndef _java_nio_file_LinkOption_h_
#define _java_nio_file_LinkOption_h_
//$ class java.nio.file.LinkOption
//$ extends java.lang.Enum
//$ implements java.nio.file.OpenOption,java.nio.file.CopyOption

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/OpenOption.h>

#pragma push_macro("NOFOLLOW_LINKS")
#undef NOFOLLOW_LINKS

namespace java {
	namespace nio {
		namespace file {

class $import LinkOption : public ::java::lang::Enum, public ::java::nio::file::OpenOption, public ::java::nio::file::CopyOption {
	$class(LinkOption, 0, ::java::lang::Enum, ::java::nio::file::OpenOption, ::java::nio::file::CopyOption)
public:
	LinkOption();
	static $Array<::java::nio::file::LinkOption>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* toString() override;
	static ::java::nio::file::LinkOption* valueOf($String* name);
	static $Array<::java::nio::file::LinkOption>* values();
	static ::java::nio::file::LinkOption* NOFOLLOW_LINKS;
	static $Array<::java::nio::file::LinkOption>* $VALUES;
};

		} // file
	} // nio
} // java

#pragma pop_macro("NOFOLLOW_LINKS")

#endif // _java_nio_file_LinkOption_h_