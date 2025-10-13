#ifndef _DefineClassByteBuffer$DummyClassLoader_h_
#define _DefineClassByteBuffer$DummyClassLoader_h_
//$ class DefineClassByteBuffer$DummyClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/Array.h>
#include <java/lang/ClassLoader.h>

#pragma push_macro("ARRAY_BUFFER")
#undef ARRAY_BUFFER
#pragma push_macro("CLASS_NAME")
#undef CLASS_NAME
#pragma push_macro("DIRECT_BUFFER")
#undef DIRECT_BUFFER
#pragma push_macro("DUP_ARRAY_BUFFER")
#undef DUP_ARRAY_BUFFER
#pragma push_macro("DUP_DIRECT_BUFFER")
#undef DUP_DIRECT_BUFFER
#pragma push_macro("MAPPED_BUFFER")
#undef MAPPED_BUFFER
#pragma push_macro("MAX_TYPE")
#undef MAX_TYPE
#pragma push_macro("READ_ONLY_ARRAY_BUFFER")
#undef READ_ONLY_ARRAY_BUFFER
#pragma push_macro("READ_ONLY_DIRECT_BUFFER")
#undef READ_ONLY_DIRECT_BUFFER
#pragma push_macro("WRAPPED_BUFFER")
#undef WRAPPED_BUFFER

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

class $export DefineClassByteBuffer$DummyClassLoader : public ::java::lang::ClassLoader {
	$class(DefineClassByteBuffer$DummyClassLoader, 0, ::java::lang::ClassLoader)
public:
	DefineClassByteBuffer$DummyClassLoader();
	using ::java::lang::ClassLoader::findClass;
	void init$(int32_t loaderType);
	virtual $Class* findClass($String* name) override;
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name, bool resolve) override;
	static ::java::nio::ByteBuffer* readClassFile($String* name);
	static $String* CLASS_NAME;
	static const int32_t MAPPED_BUFFER = 0;
	static const int32_t DIRECT_BUFFER = 1;
	static const int32_t ARRAY_BUFFER = 2;
	static const int32_t WRAPPED_BUFFER = 3;
	static const int32_t READ_ONLY_ARRAY_BUFFER = 4;
	static const int32_t READ_ONLY_DIRECT_BUFFER = 5;
	static const int32_t DUP_ARRAY_BUFFER = 6;
	static const int32_t DUP_DIRECT_BUFFER = 7;
	static const int32_t MAX_TYPE = 7;
	int32_t loaderType = 0;
	static $Array<::java::nio::ByteBuffer>* buffers;
};

#pragma pop_macro("ARRAY_BUFFER")
#pragma pop_macro("CLASS_NAME")
#pragma pop_macro("DIRECT_BUFFER")
#pragma pop_macro("DUP_ARRAY_BUFFER")
#pragma pop_macro("DUP_DIRECT_BUFFER")
#pragma pop_macro("MAPPED_BUFFER")
#pragma pop_macro("MAX_TYPE")
#pragma pop_macro("READ_ONLY_ARRAY_BUFFER")
#pragma pop_macro("READ_ONLY_DIRECT_BUFFER")
#pragma pop_macro("WRAPPED_BUFFER")

#endif // _DefineClassByteBuffer$DummyClassLoader_h_