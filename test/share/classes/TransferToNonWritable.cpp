#include <TransferToNonWritable.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/NonWritableChannelException.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileChannel = ::java::nio::channels::FileChannel;
using $NonWritableChannelException = ::java::nio::channels::NonWritableChannelException;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;

void TransferToNonWritable::init$() {
}

void TransferToNonWritable::main($StringArray* args) {
	$useLocalObjectStack();
	$var($File, blah, $File::createTempFile("blah"_s, nullptr));
	$nc(blah)->deleteOnExit();
	$var($FileInputStream, fis, $new($FileInputStream, blah));
	$var($FileChannel, channel, fis->getChannel());
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$nc(channel)->transferTo((int64_t)0, (int64_t)2, $cast($SeekableByteChannel, channel));
			$throwNew($RuntimeException, "Test failed"_s);
		} catch ($NonWritableChannelException& nwce) {
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(channel)->close();
		blah->delete$();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

TransferToNonWritable::TransferToNonWritable() {
}

$Class* TransferToNonWritable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TransferToNonWritable, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TransferToNonWritable, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TransferToNonWritable",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TransferToNonWritable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransferToNonWritable);
	});
	return class$;
}

$Class* TransferToNonWritable::class$ = nullptr;