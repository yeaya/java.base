#include <Transfers.h>

#include <Transfers$Failure.h>
#include <Transfers$FileSource.h>
#include <Transfers$FileTarget.h>
#include <Transfers$IntGenerator.h>
#include <Transfers$Source.h>
#include <Transfers$Target.h>
#include <Transfers$UserSource.h>
#include <Transfers$UserTarget.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef MAX_FILE_SIZE
#undef MAX_XFER_SIZE

using $Transfers$Failure = ::Transfers$Failure;
using $Transfers$FileSource = ::Transfers$FileSource;
using $Transfers$FileTarget = ::Transfers$FileTarget;
using $Transfers$IntGenerator = ::Transfers$IntGenerator;
using $Transfers$Source = ::Transfers$Source;
using $Transfers$Target = ::Transfers$Target;
using $Transfers$UserSource = ::Transfers$UserSource;
using $Transfers$UserTarget = ::Transfers$UserTarget;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $Random = ::java::util::Random;

$FieldInfo _Transfers_FieldInfo_[] = {
	{"out", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(Transfers, out)},
	{"sourceFile", "Ljava/io/File;", nullptr, $STATIC, $staticField(Transfers, sourceFile)},
	{"targetFile", "Ljava/io/File;", nullptr, $STATIC, $staticField(Transfers, targetFile)},
	{"MAX_XFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Transfers, MAX_XFER_SIZE)},
	{"MAX_FILE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Transfers, MAX_FILE_SIZE)},
	{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Transfers, debug)},
	{"verbose", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Transfers, verbose)},
	{}
};

$MethodInfo _Transfers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Transfers, init$, void)},
	{"checkBytes", "(Ljava/nio/channels/FileChannel;II[B)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Transfers, checkBytes, void, $FileChannel*, int32_t, int32_t, $bytes*), "java.io.IOException"},
	{"checkRandomBytes", "(Ljava/nio/channels/FileChannel;IIJ)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Transfers, checkRandomBytes, void, $FileChannel*, int32_t, int32_t, int64_t), "java.io.IOException"},
	{"checkZeroBytes", "(Ljava/nio/channels/FileChannel;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Transfers, checkZeroBytes, void, $FileChannel*, int32_t, int32_t), "java.io.IOException"},
	{"dump", "(Ljava/nio/channels/FileChannel;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Transfers, dump, void, $FileChannel*), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Transfers, main, void, $StringArray*), "java.lang.Exception"},
	{"show", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $STATIC, $staticMethod(Transfers, show, void, $String*, $String*, int32_t, int32_t)},
	{"testFrom", "(JLTransfers$Source;Ljava/nio/channels/FileChannel;II)V", nullptr, $STATIC, $staticMethod(Transfers, testFrom, void, int64_t, $Transfers$Source*, $FileChannel*, int32_t, int32_t), "java.io.IOException"},
	{"testTo", "(JLjava/nio/channels/FileChannel;IILTransfers$Target;)V", nullptr, $STATIC, $staticMethod(Transfers, testTo, void, int64_t, $FileChannel*, int32_t, int32_t, $Transfers$Target*), "java.io.IOException"},
	{"writeBytes", "([BLjava/nio/channels/FileChannel;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Transfers, writeBytes, void, $bytes*, $FileChannel*, int32_t, int32_t), "java.io.IOException"},
	{"writeRandomBytes", "(JLjava/nio/channels/FileChannel;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Transfers, writeRandomBytes, void, int64_t, $FileChannel*, int32_t, int32_t), "java.io.IOException"},
	{"writeZeroBytes", "(Ljava/nio/channels/FileChannel;II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Transfers, writeZeroBytes, void, $FileChannel*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _Transfers_InnerClassesInfo_[] = {
	{"Transfers$IntGenerator", "Transfers", "IntGenerator", $STATIC},
	{"Transfers$UserTarget", "Transfers", "UserTarget", $STATIC},
	{"Transfers$FileTarget", "Transfers", "FileTarget", $STATIC},
	{"Transfers$Target", "Transfers", "Target", $STATIC | $ABSTRACT},
	{"Transfers$UserSource", "Transfers", "UserSource", $STATIC},
	{"Transfers$FileSource", "Transfers", "FileSource", $STATIC},
	{"Transfers$Source", "Transfers", "Source", $STATIC | $ABSTRACT},
	{"Transfers$Failure", "Transfers", "Failure", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Transfers_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Transfers",
	"java.lang.Object",
	nullptr,
	_Transfers_FieldInfo_,
	_Transfers_MethodInfo_,
	nullptr,
	nullptr,
	_Transfers_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Transfers$IntGenerator,Transfers$UserTarget,Transfers$UserTarget$1,Transfers$FileTarget,Transfers$Target,Transfers$UserSource,Transfers$UserSource$1,Transfers$FileSource,Transfers$Source,Transfers$Failure"
};

$Object* allocate$Transfers($Class* clazz) {
	return $of($alloc(Transfers));
}

$PrintStream* Transfers::out = nullptr;
$File* Transfers::sourceFile = nullptr;
$File* Transfers::targetFile = nullptr;
bool Transfers::debug = false;
bool Transfers::verbose = false;

void Transfers::init$() {
}

void Transfers::writeBytes($bytes* ba, $FileChannel* fc, int32_t off, int32_t len) {
	$init(Transfers);
	$nc(fc)->position(off);
	if (fc->write($($ByteBuffer::wrap(ba, 0, len))) != len) {
		$throwNew($IOException, "Incomplete write"_s);
	}
	fc->position(0);
}

void Transfers::writeRandomBytes(int64_t seed, $FileChannel* fc, int32_t off, int32_t len) {
	$init(Transfers);
	$useLocalCurrentObjectStackCache();
	$var($Random, r, $new($Random, seed));
	$var($bytes, ba, $new($bytes, len));
	r->nextBytes(ba);
	writeBytes(ba, fc, off, len);
}

void Transfers::writeZeroBytes($FileChannel* fc, int32_t off, int32_t len) {
	$init(Transfers);
	$var($bytes, ba, $new($bytes, len));
	writeBytes(ba, fc, off, len);
}

void Transfers::checkBytes($FileChannel* fc, int32_t off, int32_t len, $bytes* bytes) {
	$init(Transfers);
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, bb, $ByteBuffer::allocate(len));
	$nc(fc)->position(off);
	if (fc->read(bb) != len) {
		$throwNew($IOException, "Incomplete read"_s);
	}
	$nc(bb)->flip();
	$var($ByteBuffer, bab, $ByteBuffer::wrap(bytes, 0, len));
	if (!bb->equals(bab)) {
		$throwNew($Transfers$Failure, "Wrong data written"_s);
	}
}

void Transfers::checkRandomBytes($FileChannel* fc, int32_t off, int32_t len, int64_t seed) {
	$init(Transfers);
	$useLocalCurrentObjectStackCache();
	$var($bytes, ba, $new($bytes, len));
	$var($Random, r, $new($Random, seed));
	r->nextBytes(ba);
	checkBytes(fc, off, len, ba);
}

void Transfers::checkZeroBytes($FileChannel* fc, int32_t off, int32_t len) {
	$init(Transfers);
	$var($bytes, ba, $new($bytes, len));
	checkBytes(fc, off, len, ba);
}

void Transfers::dump($FileChannel* fc) {
	$init(Transfers);
	$useLocalCurrentObjectStackCache();
	int32_t sz = (int32_t)$nc(fc)->size();
	$var($ByteBuffer, bb, $ByteBuffer::allocate(sz));
	fc->position(0);
	if (fc->read(bb) != sz) {
		$throwNew($IOException, "Incomplete read"_s);
	}
	$nc(bb)->flip();
	int8_t prev = (int8_t)-1;
	int32_t r = 0;
	int32_t n = 0;
	while (bb->hasRemaining() && (n < 32)) {
		int8_t b = bb->get();
		if (b == prev) {
			++r;
			continue;
		}
		if (r > 0) {
			int32_t c = (int32_t)(prev & (uint32_t)255);
			if (c < 16) {
				$nc(Transfers::out)->print(u'0');
			}
			$nc(Transfers::out)->print($($Integer::toHexString(c)));
			if (r > 1) {
				$nc(Transfers::out)->print("["_s);
				$nc(Transfers::out)->print(r);
				$nc(Transfers::out)->print("]"_s);
			}
			++n;
		}
		prev = b;
		r = 1;
	}
	if (r > 0) {
		int32_t c = (int32_t)(prev & (uint32_t)255);
		if (c < 16) {
			$nc(Transfers::out)->print(u'0');
		}
		$nc(Transfers::out)->print($($Integer::toHexString(c)));
		if (r > 1) {
			$nc(Transfers::out)->print("["_s);
			$nc(Transfers::out)->print(r);
			$nc(Transfers::out)->print("]"_s);
		}
		++n;
	}
	if (bb->hasRemaining()) {
		$nc(Transfers::out)->print("..."_s);
	}
	$nc(Transfers::out)->println();
}

void Transfers::show($String* dir, $String* channelName, int32_t off, int32_t len) {
	$init(Transfers);
	$useLocalCurrentObjectStackCache();
	if (!Transfers::verbose) {
		return;
	}
	$nc(Transfers::out)->println($$str({dir, " "_s, channelName, ": offset "_s, $$str(off), ", length "_s, $$str(len)}));
}

void Transfers::testTo(int64_t seed, $FileChannel* fc, int32_t off, int32_t len, $Transfers$Target* tgt) {
	$init(Transfers);
	$useLocalCurrentObjectStackCache();
	show("To"_s, $($nc(tgt)->name()), off, len);
	writeZeroBytes(fc, 0, Transfers::MAX_FILE_SIZE);
	writeRandomBytes(seed, fc, off, len);
	int32_t pos = (int32_t)((int32_t)seed & (uint32_t)4095);
	$nc(fc)->position(pos);
	int32_t n = (int32_t)fc->transferTo(off, len, $($nc(tgt)->channel()));
	if (n != len) {
		$throwNew($Transfers$Failure, $$str({"Incorrect transfer length: "_s, $$str(n), " (expected "_s, $$str(len), ")"_s}));
	}
	if (fc->position() != pos) {
		$throwNew($Transfers$Failure, "Position changed"_s);
	}
	if (Transfers::debug) {
		dump(fc);
	}
	checkRandomBytes(fc, off, len, seed);
	writeZeroBytes(fc, off, len);
	checkZeroBytes(fc, 0, Transfers::MAX_FILE_SIZE);
	$nc(tgt)->verify();
}

void Transfers::testFrom(int64_t seed, $Transfers$Source* src, $FileChannel* fc, int32_t off, int32_t len) {
	$init(Transfers);
	$useLocalCurrentObjectStackCache();
	show("From"_s, $($nc(src)->name()), off, len);
	writeZeroBytes(fc, 0, Transfers::MAX_FILE_SIZE);
	int32_t pos = (int32_t)((int32_t)seed & (uint32_t)4095);
	$nc(fc)->position(pos);
	int32_t n = (int32_t)fc->transferFrom($($nc(src)->channel()), off, len);
	if (n != len) {
		$throwNew($Transfers$Failure, $$str({"Incorrect transfer length: "_s, $$str(n), " (expected "_s, $$str(len), ")"_s}));
	}
	$nc(src)->verify();
	if (fc->position() != pos) {
		$throwNew($Transfers$Failure, "Position changed"_s);
	}
	if (Transfers::debug) {
		dump(fc);
	}
	checkRandomBytes(fc, off, len, seed);
	writeZeroBytes(fc, off, len);
	checkZeroBytes(fc, 0, Transfers::MAX_FILE_SIZE);
}

void Transfers::main($StringArray* args) {
	$init(Transfers);
	$useLocalCurrentObjectStackCache();
	if ($nc(args)->length > 0) {
		if ($nc(args->get(0))->indexOf((int32_t)u'v') >= 0) {
			Transfers::verbose = true;
		}
		if ($nc(args->get(0))->indexOf((int32_t)u'd') >= 0) {
			Transfers::debug = (Transfers::verbose = true);
		}
	}
	$var($File, testDir, $new($File, $($System::getProperty("test.dir"_s, "."_s))));
	$assignStatic(Transfers::sourceFile, $File::createTempFile("xfer.src."_s, ""_s, testDir));
	$nc(Transfers::sourceFile)->deleteOnExit();
	$assignStatic(Transfers::targetFile, $File::createTempFile("xfer.tgt."_s, ""_s, testDir));
	$nc(Transfers::targetFile)->deleteOnExit();
	$var($File, fn, $File::createTempFile("xfer.fch."_s, ""_s, testDir));
	$nc(fn)->deleteOnExit();
	$var($Random, rnd, $new($Random));
	int32_t failures = 0;
	{
		$var($FileChannel, fc, $$new($RandomAccessFile, fn, "rw"_s)->getChannel());
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					for (bool to = false;; to = true) {
						for (bool user = false;; user = true) {
							if (!Transfers::verbose) {
								$nc(Transfers::out)->print($$str({(to ? "To "_s : "From "_s), (user ? "user channel"_s : "file channel"_s), ":"_s}));
							}
							$var($Transfers$IntGenerator, offGen, $new($Transfers$IntGenerator, Transfers::MAX_XFER_SIZE + 2));
							while (offGen->hasNext()) {
								int32_t off = offGen->next();
								if (!Transfers::verbose) {
									$nc(Transfers::out)->print($$str({" "_s, $$str(off)}));
								}
								$var($Transfers$IntGenerator, lenGen, $new($Transfers$IntGenerator, Transfers::MAX_XFER_SIZE + 2));
								while (lenGen->hasNext()) {
									int32_t len = lenGen->next();
									int64_t s = rnd->nextLong();
									$var($String, chName, nullptr);
									try {
										if (to) {
											$var($Transfers$Target, tgt, nullptr);
											if (user) {
												$assign(tgt, $new($Transfers$UserTarget, len, s));
											} else {
												$assign(tgt, $new($Transfers$FileTarget, len, s));
											}
											$assign(chName, $nc(tgt)->name());
											testTo(s, fc, off, len, tgt);
										} else {
											$var($Transfers$Source, src, nullptr);
											if (user) {
												$assign(src, $new($Transfers$UserSource, len, s));
											} else {
												$assign(src, $new($Transfers$FileSource, len, s));
											}
											$assign(chName, $nc(src)->name());
											testFrom(s, src, fc, off, len);
										}
									} catch ($Transfers$Failure& x) {
										$nc(Transfers::out)->println();
										$nc(Transfers::out)->println($$str({"FAILURE: "_s, chName, ", offset "_s, $$str(off), ", length "_s, $$str(len)}));
										x->printStackTrace(Transfers::out);
										++failures;
									}
								}
							}
							if (!Transfers::verbose) {
								$nc(Transfers::out)->println();
							}
							if (user) {
								break;
							}
						}
						if (to) {
							break;
						}
					}
				} catch ($Throwable& t$) {
					if (fc != nullptr) {
						try {
							fc->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (fc != nullptr) {
					fc->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$nc(Transfers::sourceFile)->delete$();
	$nc(Transfers::targetFile)->delete$();
	fn->delete$();
	if (failures > 0) {
		$nc(Transfers::out)->println();
		$throwNew($RuntimeException, "Some tests failed"_s);
	}
	$nc(Transfers::out)->println("Test succeeded."_s);
}

void clinit$Transfers($Class* class$) {
	$assignStatic(Transfers::out, $System::out);
	Transfers::debug = false;
	Transfers::verbose = false;
}

Transfers::Transfers() {
}

$Class* Transfers::load$($String* name, bool initialize) {
	$loadClass(Transfers, name, initialize, &_Transfers_ClassInfo_, clinit$Transfers, allocate$Transfers);
	return class$;
}

$Class* Transfers::class$ = nullptr;