#include <PassThroughFileSystem$PassThroughProvider$1.h>
#include <PassThroughFileSystem$PassThroughProvider$1$1.h>
#include <PassThroughFileSystem$PassThroughProvider.h>
#include <java/io/Closeable.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $PassThroughFileSystem$PassThroughProvider = ::PassThroughFileSystem$PassThroughProvider;
using $PassThroughFileSystem$PassThroughProvider$1$1 = ::PassThroughFileSystem$PassThroughProvider$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $Iterator = ::java::util::Iterator;

void PassThroughFileSystem$PassThroughProvider$1::init$($PassThroughFileSystem$PassThroughProvider* this$0, $DirectoryStream* val$stream) {
	$set(this, this$0, this$0);
	$set(this, val$stream, val$stream);
}

$Iterator* PassThroughFileSystem$PassThroughProvider$1::iterator() {
	$var($Iterator, itr, $nc(this->val$stream)->iterator());
	return $new($PassThroughFileSystem$PassThroughProvider$1$1, this, itr);
}

void PassThroughFileSystem$PassThroughProvider$1::close() {
	$nc(this->val$stream)->close();
}

PassThroughFileSystem$PassThroughProvider$1::PassThroughFileSystem$PassThroughProvider$1() {
}

$Class* PassThroughFileSystem$PassThroughProvider$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LPassThroughFileSystem$PassThroughProvider;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$PassThroughProvider$1, this$0)},
		{"val$stream", "Ljava/nio/file/DirectoryStream;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$PassThroughProvider$1, val$stream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPassThroughFileSystem$PassThroughProvider;Ljava/nio/file/DirectoryStream;)V", "()V", 0, $method(PassThroughFileSystem$PassThroughProvider$1, init$, void, $PassThroughFileSystem$PassThroughProvider*, $DirectoryStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(PassThroughFileSystem$PassThroughProvider$1, close, void), "java.io.IOException"},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC, $virtualMethod(PassThroughFileSystem$PassThroughProvider$1, iterator, $Iterator*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PassThroughFileSystem$PassThroughProvider",
		"wrap",
		"(Ljava/nio/file/DirectoryStream;)Ljava/nio/file/DirectoryStream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PassThroughFileSystem$PassThroughProvider", "PassThroughFileSystem", "PassThroughProvider", $STATIC},
		{"PassThroughFileSystem$PassThroughProvider$1", nullptr, nullptr, 0},
		{"PassThroughFileSystem$PassThroughProvider$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PassThroughFileSystem$PassThroughProvider$1",
		"java.lang.Object",
		"java.nio.file.DirectoryStream",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PassThroughFileSystem"
	};
	$loadClass(PassThroughFileSystem$PassThroughProvider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PassThroughFileSystem$PassThroughProvider$1));
	});
	return class$;
}

$Class* PassThroughFileSystem$PassThroughProvider$1::class$ = nullptr;