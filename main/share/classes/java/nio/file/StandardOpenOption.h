#ifndef _java_nio_file_StandardOpenOption_h_
#define _java_nio_file_StandardOpenOption_h_
//$ class java.nio.file.StandardOpenOption
//$ extends java.lang.Enum
//$ implements java.nio.file.OpenOption

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/nio/file/OpenOption.h>

#pragma push_macro("READ")
#undef READ
#pragma push_macro("TRUNCATE_EXISTING")
#undef TRUNCATE_EXISTING
#pragma push_macro("CREATE")
#undef CREATE
#pragma push_macro("CREATE_NEW")
#undef CREATE_NEW
#pragma push_macro("SPARSE")
#undef SPARSE
#pragma push_macro("DELETE_ON_CLOSE")
#undef DELETE_ON_CLOSE
#pragma push_macro("DSYNC")
#undef DSYNC
#pragma push_macro("SYNC")
#undef SYNC
#pragma push_macro("APPEND")
#undef APPEND
#pragma push_macro("WRITE")
#undef WRITE

namespace java {
	namespace nio {
		namespace file {

class $export StandardOpenOption : public ::java::lang::Enum, public ::java::nio::file::OpenOption {
	$class(StandardOpenOption, 0, ::java::lang::Enum, ::java::nio::file::OpenOption)
public:
	StandardOpenOption();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::java::nio::file::StandardOpenOption>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* toString() override;
	static ::java::nio::file::StandardOpenOption* valueOf($String* name);
	static $Array<::java::nio::file::StandardOpenOption>* values();
	static ::java::nio::file::StandardOpenOption* READ;
	static ::java::nio::file::StandardOpenOption* WRITE;
	static ::java::nio::file::StandardOpenOption* APPEND;
	static ::java::nio::file::StandardOpenOption* TRUNCATE_EXISTING;
	static ::java::nio::file::StandardOpenOption* CREATE;
	static ::java::nio::file::StandardOpenOption* CREATE_NEW;
	static ::java::nio::file::StandardOpenOption* DELETE_ON_CLOSE;
	static ::java::nio::file::StandardOpenOption* SPARSE;
	static ::java::nio::file::StandardOpenOption* SYNC;
	static ::java::nio::file::StandardOpenOption* DSYNC;
	static $Array<::java::nio::file::StandardOpenOption>* $VALUES;
};

		} // file
	} // nio
} // java

#pragma pop_macro("READ")
#pragma pop_macro("TRUNCATE_EXISTING")
#pragma pop_macro("CREATE")
#pragma pop_macro("CREATE_NEW")
#pragma pop_macro("SPARSE")
#pragma pop_macro("DELETE_ON_CLOSE")
#pragma pop_macro("DSYNC")
#pragma pop_macro("SYNC")
#pragma pop_macro("APPEND")
#pragma pop_macro("WRITE")

#endif // _java_nio_file_StandardOpenOption_h_