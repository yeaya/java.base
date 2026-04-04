#include <java/nio/file/FileTreeWalker$DirectoryNode.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileTreeWalker.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace nio {
		namespace file {

void FileTreeWalker$DirectoryNode::init$($Path* dir, Object$* key, $DirectoryStream* stream) {
	$set(this, dir, dir);
	$set(this, key$, key);
	$set(this, stream$, stream);
	$set(this, iterator$, $nc(stream)->iterator());
}

$Path* FileTreeWalker$DirectoryNode::directory() {
	return this->dir;
}

$Object* FileTreeWalker$DirectoryNode::key() {
	return this->key$;
}

$DirectoryStream* FileTreeWalker$DirectoryNode::stream() {
	return this->stream$;
}

$Iterator* FileTreeWalker$DirectoryNode::iterator() {
	return this->iterator$;
}

void FileTreeWalker$DirectoryNode::skip() {
	this->skipped$ = true;
}

bool FileTreeWalker$DirectoryNode::skipped() {
	return this->skipped$;
}

FileTreeWalker$DirectoryNode::FileTreeWalker$DirectoryNode() {
}

$Class* FileTreeWalker$DirectoryNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dir", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(FileTreeWalker$DirectoryNode, dir)},
		{"key", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(FileTreeWalker$DirectoryNode, key$)},
		{"stream", "Ljava/nio/file/DirectoryStream;", "Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;", $PRIVATE | $FINAL, $field(FileTreeWalker$DirectoryNode, stream$)},
		{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PRIVATE | $FINAL, $field(FileTreeWalker$DirectoryNode, iterator$)},
		{"skipped", "Z", nullptr, $PRIVATE, $field(FileTreeWalker$DirectoryNode, skipped$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;Ljava/lang/Object;Ljava/nio/file/DirectoryStream;)V", "(Ljava/nio/file/Path;Ljava/lang/Object;Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;)V", 0, $method(FileTreeWalker$DirectoryNode, init$, void, $Path*, Object$*, $DirectoryStream*)},
		{"directory", "()Ljava/nio/file/Path;", nullptr, 0, $virtualMethod(FileTreeWalker$DirectoryNode, directory, $Path*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", 0, $virtualMethod(FileTreeWalker$DirectoryNode, iterator, $Iterator*)},
		{"key", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(FileTreeWalker$DirectoryNode, key, $Object*)},
		{"skip", "()V", nullptr, 0, $virtualMethod(FileTreeWalker$DirectoryNode, skip, void)},
		{"skipped", "()Z", nullptr, 0, $virtualMethod(FileTreeWalker$DirectoryNode, skipped, bool)},
		{"stream", "()Ljava/nio/file/DirectoryStream;", "()Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;", 0, $virtualMethod(FileTreeWalker$DirectoryNode, stream, $DirectoryStream*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.FileTreeWalker$DirectoryNode", "java.nio.file.FileTreeWalker", "DirectoryNode", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.FileTreeWalker$DirectoryNode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.FileTreeWalker"
	};
	$loadClass(FileTreeWalker$DirectoryNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileTreeWalker$DirectoryNode);
	});
	return class$;
}

$Class* FileTreeWalker$DirectoryNode::class$ = nullptr;

		} // file
	} // nio
} // java