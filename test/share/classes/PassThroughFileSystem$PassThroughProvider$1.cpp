#include <PassThroughFileSystem$PassThroughProvider$1.h>

#include <PassThroughFileSystem$PassThroughProvider$1$1.h>
#include <PassThroughFileSystem$PassThroughProvider.h>
#include <java/io/Closeable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $PassThroughFileSystem$PassThroughProvider = ::PassThroughFileSystem$PassThroughProvider;
using $PassThroughFileSystem$PassThroughProvider$1$1 = ::PassThroughFileSystem$PassThroughProvider$1$1;
using $Closeable = ::java::io::Closeable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $Iterator = ::java::util::Iterator;

$FieldInfo _PassThroughFileSystem$PassThroughProvider$1_FieldInfo_[] = {
	{"this$0", "LPassThroughFileSystem$PassThroughProvider;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$PassThroughProvider$1, this$0)},
	{"val$stream", "Ljava/nio/file/DirectoryStream;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$PassThroughProvider$1, val$stream)},
	{}
};

$MethodInfo _PassThroughFileSystem$PassThroughProvider$1_MethodInfo_[] = {
	{"<init>", "(LPassThroughFileSystem$PassThroughProvider;Ljava/nio/file/DirectoryStream;)V", "()V", 0, $method(static_cast<void(PassThroughFileSystem$PassThroughProvider$1::*)($PassThroughFileSystem$PassThroughProvider*,$DirectoryStream*)>(&PassThroughFileSystem$PassThroughProvider$1::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _PassThroughFileSystem$PassThroughProvider$1_EnclosingMethodInfo_ = {
	"PassThroughFileSystem$PassThroughProvider",
	"wrap",
	"(Ljava/nio/file/DirectoryStream;)Ljava/nio/file/DirectoryStream;"
};

$InnerClassInfo _PassThroughFileSystem$PassThroughProvider$1_InnerClassesInfo_[] = {
	{"PassThroughFileSystem$PassThroughProvider", "PassThroughFileSystem", "PassThroughProvider", $STATIC},
	{"PassThroughFileSystem$PassThroughProvider$1", nullptr, nullptr, 0},
	{"PassThroughFileSystem$PassThroughProvider$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PassThroughFileSystem$PassThroughProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"PassThroughFileSystem$PassThroughProvider$1",
	"java.lang.Object",
	"java.nio.file.DirectoryStream",
	_PassThroughFileSystem$PassThroughProvider$1_FieldInfo_,
	_PassThroughFileSystem$PassThroughProvider$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;",
	&_PassThroughFileSystem$PassThroughProvider$1_EnclosingMethodInfo_,
	_PassThroughFileSystem$PassThroughProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PassThroughFileSystem"
};

$Object* allocate$PassThroughFileSystem$PassThroughProvider$1($Class* clazz) {
	return $of($alloc(PassThroughFileSystem$PassThroughProvider$1));
}

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
	$loadClass(PassThroughFileSystem$PassThroughProvider$1, name, initialize, &_PassThroughFileSystem$PassThroughProvider$1_ClassInfo_, allocate$PassThroughFileSystem$PassThroughProvider$1);
	return class$;
}

$Class* PassThroughFileSystem$PassThroughProvider$1::class$ = nullptr;