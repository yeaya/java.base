#ifndef _java_nio_file_StandardCopyOption_h_
#define _java_nio_file_StandardCopyOption_h_
//$ class java.nio.file.StandardCopyOption
//$ extends java.lang.Enum
//$ implements java.nio.file.CopyOption

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/nio/file/CopyOption.h>

#pragma push_macro("ATOMIC_MOVE")
#undef ATOMIC_MOVE
#pragma push_macro("COPY_ATTRIBUTES")
#undef COPY_ATTRIBUTES
#pragma push_macro("REPLACE_EXISTING")
#undef REPLACE_EXISTING

namespace java {
	namespace nio {
		namespace file {

class $export StandardCopyOption : public ::java::lang::Enum, public ::java::nio::file::CopyOption {
	$class(StandardCopyOption, 0, ::java::lang::Enum, ::java::nio::file::CopyOption)
public:
	StandardCopyOption();
	static $Array<::java::nio::file::StandardCopyOption>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* toString() override;
	static ::java::nio::file::StandardCopyOption* valueOf($String* name);
	static $Array<::java::nio::file::StandardCopyOption>* values();
	static ::java::nio::file::StandardCopyOption* REPLACE_EXISTING;
	static ::java::nio::file::StandardCopyOption* COPY_ATTRIBUTES;
	static ::java::nio::file::StandardCopyOption* ATOMIC_MOVE;
	static $Array<::java::nio::file::StandardCopyOption>* $VALUES;
};

		} // file
	} // nio
} // java

#pragma pop_macro("ATOMIC_MOVE")
#pragma pop_macro("COPY_ATTRIBUTES")
#pragma pop_macro("REPLACE_EXISTING")

#endif // _java_nio_file_StandardCopyOption_h_