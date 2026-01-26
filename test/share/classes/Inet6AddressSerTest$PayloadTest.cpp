#include <Inet6AddressSerTest$PayloadTest.h>

#include <Inet6AddressSerTest.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Inet6AddressSerTest$PayloadTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Inet6AddressSerTest$PayloadTest, init$, void)},
	{"deserialize", "([B)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(Inet6AddressSerTest$PayloadTest, deserialize, $Object*, $bytes*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"serialize", "(Ljava/lang/String;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(Inet6AddressSerTest$PayloadTest, serialize, $bytes*, $String*), "java.io.IOException"},
	{"test", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(Inet6AddressSerTest$PayloadTest, test, void, $String*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _Inet6AddressSerTest$PayloadTest_InnerClassesInfo_[] = {
	{"Inet6AddressSerTest$PayloadTest", "Inet6AddressSerTest", "PayloadTest", $STATIC},
	{}
};

$ClassInfo _Inet6AddressSerTest$PayloadTest_ClassInfo_ = {
	$ACC_SUPER,
	"Inet6AddressSerTest$PayloadTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Inet6AddressSerTest$PayloadTest_MethodInfo_,
	nullptr,
	nullptr,
	_Inet6AddressSerTest$PayloadTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Inet6AddressSerTest"
};

$Object* allocate$Inet6AddressSerTest$PayloadTest($Class* clazz) {
	return $of($alloc(Inet6AddressSerTest$PayloadTest));
}

void Inet6AddressSerTest$PayloadTest::init$() {
}

$bytes* Inet6AddressSerTest$PayloadTest::serialize($String* className) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		{
			$var($Throwable, var$0, nullptr);
			$var($bytes, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($DataOutputStream, dos, $new($DataOutputStream, baos));
					{
						$var($Throwable, var$3, nullptr);
						$var($bytes, var$5, nullptr);
						bool return$4 = false;
						try {
							try {
								dos->writeShort(-21267);
								dos->writeShort(5);
								dos->writeByte(115);
								dos->writeByte(114);
								dos->writeUTF(className);
								dos->writeLong(0x5F7C2081522C8021);
								dos->writeByte(2);
								dos->writeShort(0);
								dos->writeByte(120);
								dos->writeByte(112);
								$assign(var$5, baos->toByteArray());
								return$4 = true;
								goto $finally1;
							} catch ($Throwable& t$) {
								try {
									dos->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$6) {
							$assign(var$3, var$6);
						} $finally1: {
							dos->close();
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
						if (return$4) {
							$assign(var$2, var$5);
							return$1 = true;
							goto $finally;
						}
					}
				} catch ($Throwable& t$) {
					try {
						baos->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$7) {
				$assign(var$0, var$7);
			} $finally: {
				baos->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$Object* Inet6AddressSerTest$PayloadTest::deserialize($bytes* buffer) {
	$useLocalCurrentObjectStackCache();
	{
		$var($ObjectInputStream, ois, $new($ObjectInputStream, $$new($ByteArrayInputStream, buffer)));
		{
			$var($Throwable, var$0, nullptr);
			$var($Object, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, ois->readObject());
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					try {
						ois->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				ois->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

void Inet6AddressSerTest$PayloadTest::test($String* className) {
	deserialize($(serialize(className)));
}

Inet6AddressSerTest$PayloadTest::Inet6AddressSerTest$PayloadTest() {
}

$Class* Inet6AddressSerTest$PayloadTest::load$($String* name, bool initialize) {
	$loadClass(Inet6AddressSerTest$PayloadTest, name, initialize, &_Inet6AddressSerTest$PayloadTest_ClassInfo_, allocate$Inet6AddressSerTest$PayloadTest);
	return class$;
}

$Class* Inet6AddressSerTest$PayloadTest::class$ = nullptr;