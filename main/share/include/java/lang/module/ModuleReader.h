#ifndef _java_lang_module_ModuleReader_h_
#define _java_lang_module_ModuleReader_h_
//$ interface java.lang.module.ModuleReader
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace lang {
		namespace module {

class $import ModuleReader : public ::java::io::Closeable {
	$interface(ModuleReader, $PRELOAD | $NO_CLASS_INIT, ::java::io::Closeable)
public:
	virtual void close() override {}
	virtual ::java::util::Optional* find($String* name) {return nullptr;}
	virtual ::java::util::stream::Stream* list() {return nullptr;}
	virtual ::java::util::Optional* open($String* name);
	virtual ::java::util::Optional* read($String* name);
	virtual void release(::java::nio::ByteBuffer* bb);
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleReader_h_