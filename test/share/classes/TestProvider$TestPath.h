#ifndef _TestProvider$TestPath_h_
#define _TestProvider$TestPath_h_
//$ class TestProvider$TestPath
//$ extends java.nio.file.Path

#include <java/lang/Array.h>
#include <java/nio/file/Path.h>

class TestProvider$TestFileSystem;
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
			class WatchEvent$Modifier;
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

class $export TestProvider$TestPath : public ::java::nio::file::Path {
	$class(TestProvider$TestPath, $NO_CLASS_INIT, ::java::nio::file::Path)
public:
	TestProvider$TestPath();
	void init$(::TestProvider$TestFileSystem* fs, ::java::nio::file::Path* delegate);
	virtual int32_t compareTo(::java::nio::file::Path* other) override;
	virtual int32_t compareTo(Object$* other) override;
	virtual bool endsWith(::java::nio::file::Path* other) override;
	virtual bool endsWith($String* other) override;
	virtual bool equals(Object$* other) override;
	virtual ::java::nio::file::Path* getFileName() override;
	virtual ::java::nio::file::FileSystem* getFileSystem() override;
	virtual ::java::nio::file::Path* getName(int32_t index) override;
	virtual int32_t getNameCount() override;
	virtual ::java::nio::file::Path* getParent() override;
	virtual ::java::nio::file::Path* getRoot() override;
	virtual int32_t hashCode() override;
	virtual bool isAbsolute() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::nio::file::Path* normalize() override;
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override;
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::WatchService* watcher, $Array<::java::nio::file::WatchEvent$Kind>* events) override;
	virtual ::java::nio::file::Path* relativize(::java::nio::file::Path* other) override;
	virtual ::java::nio::file::Path* resolve(::java::nio::file::Path* other) override;
	virtual ::java::nio::file::Path* resolve($String* other) override;
	virtual ::java::nio::file::Path* resolveSibling(::java::nio::file::Path* other) override;
	virtual ::java::nio::file::Path* resolveSibling($String* other) override;
	virtual bool startsWith(::java::nio::file::Path* other) override;
	virtual bool startsWith($String* other) override;
	virtual ::java::nio::file::Path* subpath(int32_t beginIndex, int32_t endIndex) override;
	virtual ::java::nio::file::Path* toAbsolutePath() override;
	virtual ::java::io::File* toFile() override;
	virtual ::java::nio::file::Path* toRealPath($Array<::java::nio::file::LinkOption>* options) override;
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() override;
	virtual ::java::nio::file::Path* unwrap();
	::TestProvider$TestFileSystem* fs = nullptr;
	::java::nio::file::Path* delegate = nullptr;
};

#endif // _TestProvider$TestPath_h_