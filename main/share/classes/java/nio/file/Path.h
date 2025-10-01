#ifndef _java_nio_file_Path_h_
#define _java_nio_file_Path_h_
//$ interface java.nio.file.Path
//$ extends java.lang.Comparable,java.lang.Iterable,java.nio.file.Watchable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Watchable.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
			class LinkOption;
			class WatchEvent$Kind;
			class WatchKey;
			class WatchService;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace nio {
		namespace file {

class $export Path : public ::java::lang::Comparable, public ::java::lang::Iterable, public ::java::nio::file::Watchable {
	$interface(Path, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Comparable, ::java::lang::Iterable, ::java::nio::file::Watchable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual int32_t compareTo(::java::nio::file::Path* other) {return 0;}
	virtual int32_t compareTo(Object$* other) override;
	virtual bool endsWith(::java::nio::file::Path* other) {return false;}
	virtual bool endsWith($String* other);
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual ::java::nio::file::Path* getFileName() {return nullptr;}
	virtual ::java::nio::file::FileSystem* getFileSystem() {return nullptr;}
	virtual ::java::nio::file::Path* getName(int32_t index) {return nullptr;}
	virtual int32_t getNameCount() {return 0;}
	virtual ::java::nio::file::Path* getParent() {return nullptr;}
	virtual ::java::nio::file::Path* getRoot() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isAbsolute() {return false;}
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::nio::file::Path* normalize() {return nullptr;}
	static ::java::nio::file::Path* of($String* first, $StringArray* more);
	static ::java::nio::file::Path* of(::java::net::URI* uri);
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override {return nullptr;}
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events) override;
	virtual ::java::nio::file::Path* relativize(::java::nio::file::Path* other) {return nullptr;}
	virtual ::java::nio::file::Path* resolve(::java::nio::file::Path* other) {return nullptr;}
	virtual ::java::nio::file::Path* resolve($String* other);
	virtual ::java::nio::file::Path* resolveSibling(::java::nio::file::Path* other);
	virtual ::java::nio::file::Path* resolveSibling($String* other);
	virtual bool startsWith(::java::nio::file::Path* other) {return false;}
	virtual bool startsWith($String* other);
	virtual ::java::nio::file::Path* subpath(int32_t beginIndex, int32_t endIndex) {return nullptr;}
	virtual ::java::nio::file::Path* toAbsolutePath() {return nullptr;}
	virtual ::java::io::File* toFile();
	virtual ::java::nio::file::Path* toRealPath($Array<::java::nio::file::LinkOption>* options) {return nullptr;}
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() {return nullptr;}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_Path_h_