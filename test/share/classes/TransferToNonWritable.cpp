#include <TransferToNonWritable.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/nio/channels/ByteChannel.h>
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
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $NonWritableChannelException = ::java::nio::channels::NonWritableChannelException;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _TransferToNonWritable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransferToNonWritable::*)()>(&TransferToNonWritable::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TransferToNonWritable::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TransferToNonWritable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TransferToNonWritable",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TransferToNonWritable_MethodInfo_
};

$Object* allocate$TransferToNonWritable($Class* clazz) {
	return $of($alloc(TransferToNonWritable));
}

void TransferToNonWritable::init$() {
}

void TransferToNonWritable::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, blah, $File::createTempFile("blah"_s, nullptr));
	$nc(blah)->deleteOnExit();
	$var($FileInputStream, fis, $new($FileInputStream, blah));
	$var($FileChannel, channel, fis->getChannel());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(channel)->transferTo((int64_t)0, (int64_t)2, static_cast<$WritableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>(channel))));
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
}

TransferToNonWritable::TransferToNonWritable() {
}

$Class* TransferToNonWritable::load$($String* name, bool initialize) {
	$loadClass(TransferToNonWritable, name, initialize, &_TransferToNonWritable_ClassInfo_, allocate$TransferToNonWritable);
	return class$;
}

$Class* TransferToNonWritable::class$ = nullptr;