#include <ReadUTF.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/io/EOFException.h>
#include <java/io/UTFDataFormatException.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef MAX_CORRUPTIONS_PER_CYCLE
#undef TEST_ITERATIONS

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $EOFException = ::java::io::EOFException;
using $UTFDataFormatException = ::java::io::UTFDataFormatException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Random = ::java::util::Random;

$Random* ReadUTF::generator = nullptr;

void ReadUTF::init$() {
}

void ReadUTF::main($StringArray* args) {
	$init(ReadUTF);
	for (int32_t i = 0; i < ReadUTF::TEST_ITERATIONS; ++i) {
		try {
			writeAndReadAString();
		} catch ($UTFDataFormatException& utfdfe) {
			if (utfdfe->getMessage() == nullptr) {
				$throwNew($RuntimeException, "vague exception thrown"_s);
			}
		} catch ($EOFException& eofe) {
		}
	}
}

void ReadUTF::writeAndReadAString() {
	$init(ReadUTF);
	$useLocalObjectStack();
	int32_t length = $nc(ReadUTF::generator)->nextInt(ReadUTF::A_NUMBER_NEAR_65535) + 1;
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($StringBuffer, testBuffer, $new($StringBuffer));
	for (int32_t i = 0; i < length; ++i) {
		testBuffer->append((char16_t)ReadUTF::generator->nextInt());
	}
	$var($String, testString, testBuffer->toString());
	$var($DataOutputStream, dos, $new($DataOutputStream, baos));
	dos->writeUTF(testString);
	$var($bytes, testBytes, baos->toByteArray());
	int32_t dataLength = $nc(testBytes)->length;
	int32_t corruptions = ReadUTF::generator->nextInt(ReadUTF::MAX_CORRUPTIONS_PER_CYCLE);
	for (int32_t i = 0; i < corruptions; ++i) {
		int32_t index = ReadUTF::generator->nextInt(dataLength);
		testBytes->set(index, (int8_t)ReadUTF::generator->nextInt());
	}
	testBytes->set(dataLength - 1, (int8_t)ReadUTF::generator->nextInt());
	testBytes->set(dataLength - 2, (int8_t)ReadUTF::generator->nextInt());
	$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, testBytes));
	$var($DataInputStream, dis, $new($DataInputStream, bais));
	dis->readUTF();
}

void ReadUTF::clinit$($Class* clazz) {
	$assignStatic(ReadUTF::generator, $new($Random));
}

ReadUTF::ReadUTF() {
}

$Class* ReadUTF::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(ReadUTF, generator)},
		{"TEST_ITERATIONS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReadUTF, TEST_ITERATIONS)},
		{"A_NUMBER_NEAR_65535", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReadUTF, A_NUMBER_NEAR_65535)},
		{"MAX_CORRUPTIONS_PER_CYCLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReadUTF, MAX_CORRUPTIONS_PER_CYCLE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadUTF, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ReadUTF, main, void, $StringArray*), "java.lang.Exception"},
		{"writeAndReadAString", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReadUTF, writeAndReadAString, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadUTF",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReadUTF, name, initialize, &classInfo$$, ReadUTF::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ReadUTF);
	});
	return class$;
}

$Class* ReadUTF::class$ = nullptr;