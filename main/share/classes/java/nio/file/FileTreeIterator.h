#ifndef _java_nio_file_FileTreeIterator_h_
#define _java_nio_file_FileTreeIterator_h_
//$ class java.nio.file.FileTreeIterator
//$ extends java.util.Iterator
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>
#include <java/util/Iterator.h>

namespace java {
	namespace nio {
		namespace file {
			class FileTreeWalker;
			class FileTreeWalker$Event;
			class FileVisitOption;
			class Path;
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class FileTreeIterator : public ::java::util::Iterator, public ::java::io::Closeable {
	$class(FileTreeIterator, 0, ::java::util::Iterator, ::java::io::Closeable)
public:
	FileTreeIterator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::file::Path* start, int32_t maxDepth, $Array<::java::nio::file::FileVisitOption>* options);
	virtual void close() override;
	void fetchNextIfNeeded();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::java::nio::file::FileTreeWalker* walker = nullptr;
	::java::nio::file::FileTreeWalker$Event* next$ = nullptr;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileTreeIterator_h_