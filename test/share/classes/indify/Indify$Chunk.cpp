#include <indify/Indify$Chunk.h>

#include <indify/Indify.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

using $Indify = ::indify::Indify;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace indify {

$MethodInfo _Indify$Chunk_MethodInfo_[] = {
	{"readFrom", "(Ljava/io/DataInputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"writeTo", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Indify$Chunk_InnerClassesInfo_[] = {
	{"indify.Indify$Chunk", "indify.Indify", "Chunk", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Indify$Chunk_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"indify.Indify$Chunk",
	nullptr,
	nullptr,
	nullptr,
	_Indify$Chunk_MethodInfo_,
	nullptr,
	nullptr,
	_Indify$Chunk_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$Chunk($Class* clazz) {
	return $of($alloc(Indify$Chunk));
}

$Class* Indify$Chunk::load$($String* name, bool initialize) {
	$loadClass(Indify$Chunk, name, initialize, &_Indify$Chunk_ClassInfo_, allocate$Indify$Chunk);
	return class$;
}

$Class* Indify$Chunk::class$ = nullptr;

} // indify