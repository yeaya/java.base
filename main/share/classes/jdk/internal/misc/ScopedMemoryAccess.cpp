#include <jdk/internal/misc/ScopedMemoryAccess.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/ref/Reference.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/access/JavaNioAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/ScopedMemoryAccess$BufferAccess.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <jdk/internal/vm/vector/VectorSupport$LoadOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$StoreVectorOperation.h>
#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

#undef INSTANCE
#undef UNSAFE

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $JavaNioAccess = ::jdk::internal::access::JavaNioAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ScopedMemoryAccess$BufferAccess = ::jdk::internal::misc::ScopedMemoryAccess$BufferAccess;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;
using $ScopedMemoryAccess$Scope$ScopedAccessError = ::jdk::internal::misc::ScopedMemoryAccess$Scope$ScopedAccessError;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;
using $VectorSupport$LoadOperation = ::jdk::internal::vm::vector::VectorSupport$LoadOperation;
using $VectorSupport$StoreVectorOperation = ::jdk::internal::vm::vector::VectorSupport$StoreVectorOperation;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;
using $VectorSupport$VectorSpecies = ::jdk::internal::vm::vector::VectorSupport$VectorSpecies;

namespace jdk {
	namespace internal {
		namespace misc {

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDouble3[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDoubleAcquire4[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDoubleAcquireInternal5[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDoubleInternal6[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDoubleRelease7[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDoubleReleaseInternal8[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloat9[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloatAcquire10[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloatAcquireInternal11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloatInternal12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloatRelease13[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloatReleaseInternal14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeInt15[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeIntAcquire16[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeIntAcquireInternal17[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeIntInternal18[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeIntRelease19[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeIntReleaseInternal20[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLong21[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLongAcquire22[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLongAcquireInternal23[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLongInternal24[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLongRelease25[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLongReleaseInternal26[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndSetDouble27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndSetDoubleInternal28[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndSetFloat29[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndSetFloatInternal30[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndSetInt31[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndSetIntInternal32[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndSetLong33[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_compareAndSetLongInternal34[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_copyMemory35[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_copyMemoryInternal36[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_copySwapMemory37[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_copySwapMemoryInternal38[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_force39[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_forceInternal40[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddByte41[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddByteAcquire42[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddByteAcquireInternal43[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddByteInternal44[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddByteRelease45[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddByteReleaseInternal46[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddChar47[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddCharAcquire48[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddCharAcquireInternal49[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddCharInternal50[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddCharRelease51[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddCharReleaseInternal52[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddDouble53[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddDoubleAcquire54[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddDoubleAcquireInternal55[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddDoubleInternal56[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddDoubleRelease57[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddDoubleReleaseInternal58[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddFloat59[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddFloatAcquire60[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddFloatAcquireInternal61[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddFloatInternal62[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddFloatRelease63[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddFloatReleaseInternal64[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddInt65[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddIntAcquire66[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddIntAcquireInternal67[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddIntInternal68[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddIntRelease69[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddIntReleaseInternal70[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddLong71[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddLongAcquire72[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddLongAcquireInternal73[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddLongInternal74[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddLongRelease75[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddLongReleaseInternal76[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddShort77[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddShortAcquire78[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddShortAcquireInternal79[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddShortInternal80[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddShortRelease81[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndAddShortReleaseInternal82[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByte83[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByteAcquire84[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByteAcquireInternal85[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByteInternal86[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByteRelease87[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByteReleaseInternal88[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndChar89[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndCharAcquire90[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndCharAcquireInternal91[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndCharInternal92[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndCharRelease93[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndCharReleaseInternal94[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndInt95[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndIntAcquire96[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndIntAcquireInternal97[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndIntInternal98[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndIntRelease99[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndIntReleaseInternal100[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLong101[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLongAcquire102[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLongAcquireInternal103[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLongInternal104[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLongRelease105[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLongReleaseInternal106[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShort107[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShortAcquire108[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShortAcquireInternal109[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShortInternal110[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShortRelease111[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShortReleaseInternal112[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByte113[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByteAcquire114[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByteAcquireInternal115[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByteInternal116[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByteRelease117[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByteReleaseInternal118[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrChar119[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrCharAcquire120[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrCharAcquireInternal121[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrCharInternal122[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrCharRelease123[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrCharReleaseInternal124[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrInt125[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrIntAcquire126[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrIntAcquireInternal127[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrIntInternal128[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrIntRelease129[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrIntReleaseInternal130[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLong131[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLongAcquire132[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLongAcquireInternal133[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLongInternal134[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLongRelease135[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLongReleaseInternal136[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShort137[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShortAcquire138[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShortAcquireInternal139[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShortInternal140[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShortRelease141[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShortReleaseInternal142[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByte143[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByteAcquire144[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByteAcquireInternal145[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByteInternal146[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByteRelease147[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByteReleaseInternal148[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorChar149[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorCharAcquire150[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorCharAcquireInternal151[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorCharInternal152[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorCharRelease153[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorCharReleaseInternal154[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorInt155[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorIntAcquire156[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorIntAcquireInternal157[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorIntInternal158[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorIntRelease159[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorIntReleaseInternal160[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLong161[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLongAcquire162[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLongAcquireInternal163[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLongInternal164[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLongRelease165[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLongReleaseInternal166[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShort167[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShortAcquire168[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShortAcquireInternal169[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShortInternal170[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShortRelease171[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShortReleaseInternal172[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetDouble173[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetDoubleAcquire174[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetDoubleAcquireInternal175[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetDoubleInternal176[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetDoubleRelease177[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetDoubleReleaseInternal178[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetFloat179[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetFloatAcquire180[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetFloatAcquireInternal181[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetFloatInternal182[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetFloatRelease183[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetFloatReleaseInternal184[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetInt185[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetIntAcquire186[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetIntAcquireInternal187[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetIntInternal188[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetIntRelease189[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetIntReleaseInternal190[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetLong191[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetLongAcquire192[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetLongAcquireInternal193[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetLongInternal194[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetLongRelease195[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getAndSetLongReleaseInternal196[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getByte197[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getByteAcquire198[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getByteAcquireInternal199[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getByteInternal200[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getByteOpaque201[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getByteOpaqueInternal202[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getByteVolatile203[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getByteVolatileInternal204[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getChar205[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getCharAcquire206[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getCharAcquireInternal207[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getCharInternal208[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getCharOpaque209[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getCharOpaqueInternal210[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getCharUnaligned211[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getCharUnalignedInternal212[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getCharVolatile213[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getCharVolatileInternal214[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getDouble215[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getDoubleAcquire216[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getDoubleAcquireInternal217[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getDoubleInternal218[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getDoubleOpaque219[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getDoubleOpaqueInternal220[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getDoubleVolatile221[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getDoubleVolatileInternal222[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getFloat223[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getFloatAcquire224[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getFloatAcquireInternal225[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getFloatInternal226[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getFloatOpaque227[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getFloatOpaqueInternal228[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getFloatVolatile229[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getFloatVolatileInternal230[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getInt231[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getIntAcquire232[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getIntAcquireInternal233[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getIntInternal234[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getIntOpaque235[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getIntOpaqueInternal236[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getIntUnaligned237[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getIntUnalignedInternal238[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getIntVolatile239[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getIntVolatileInternal240[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getLong241[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getLongAcquire242[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getLongAcquireInternal243[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getLongInternal244[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getLongOpaque245[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getLongOpaqueInternal246[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getLongUnaligned247[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getLongUnalignedInternal248[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getLongVolatile249[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getLongVolatileInternal250[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getShort252[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getShortAcquire253[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getShortAcquireInternal254[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getShortInternal255[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getShortOpaque256[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getShortOpaqueInternal257[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getShortUnaligned258[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getShortUnalignedInternal259[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getShortVolatile260[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_getShortVolatileInternal261[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_isLoaded262[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_isLoadedInternal263[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_load264[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_loadFromByteBuffer265[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_loadFromByteBufferScoped266[] = {
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_loadInternal267[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putByte268[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putByteInternal269[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putByteOpaque270[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putByteOpaqueInternal271[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putByteRelease272[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putByteReleaseInternal273[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putByteVolatile274[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putByteVolatileInternal275[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putChar276[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putCharInternal277[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putCharOpaque278[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putCharOpaqueInternal279[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putCharRelease280[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putCharReleaseInternal281[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putCharUnaligned282[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putCharUnalignedInternal283[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putCharVolatile284[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putCharVolatileInternal285[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putDouble286[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putDoubleInternal287[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putDoubleOpaque288[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putDoubleOpaqueInternal289[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putDoubleRelease290[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putDoubleReleaseInternal291[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putDoubleVolatile292[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putDoubleVolatileInternal293[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putFloat294[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putFloatInternal295[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putFloatOpaque296[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putFloatOpaqueInternal297[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putFloatRelease298[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putFloatReleaseInternal299[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putFloatVolatile300[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putFloatVolatileInternal301[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putInt302[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putIntInternal303[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putIntOpaque304[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putIntOpaqueInternal305[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putIntRelease306[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putIntReleaseInternal307[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putIntUnaligned308[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putIntUnalignedInternal309[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putIntVolatile310[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putIntVolatileInternal311[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putLong312[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putLongInternal313[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putLongOpaque314[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putLongOpaqueInternal315[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putLongRelease316[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putLongReleaseInternal317[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putLongUnaligned318[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putLongUnalignedInternal319[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putLongVolatile320[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putLongVolatileInternal321[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putShort322[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putShortInternal323[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putShortOpaque324[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putShortOpaqueInternal325[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putShortRelease326[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putShortReleaseInternal327[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putShortUnaligned328[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putShortUnalignedInternal329[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putShortVolatile330[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_putShortVolatileInternal331[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_setMemory333[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_setMemoryInternal334[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_storeIntoByteBuffer335[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_storeIntoByteBufferScoped336[] = {
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_unload337[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_unloadInternal338[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_vectorizedMismatch339[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_vectorizedMismatchInternal340[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDouble341[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoubleAcquire342[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoubleAcquireInternal343[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoubleInternal344[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoublePlain345[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoublePlainInternal346[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoubleRelease347[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoubleReleaseInternal348[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloat349[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatAcquire350[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatAcquireInternal351[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatInternal352[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatPlain353[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatPlainInternal354[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatRelease355[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatReleaseInternal356[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetInt357[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntAcquire358[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntAcquireInternal359[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntInternal360[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntPlain361[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntPlainInternal362[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntRelease363[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntReleaseInternal364[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLong365[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongAcquire366[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongAcquireInternal367[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongInternal368[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongPlain369[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongPlainInternal370[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongRelease371[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongReleaseInternal372[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{"Ljdk/internal/misc/ScopedMemoryAccess$Scoped;", nullptr},
	{}
};

$FieldInfo _ScopedMemoryAccess_FieldInfo_[] = {
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ScopedMemoryAccess, UNSAFE)},
	{"theScopedMemoryAccess", "Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ScopedMemoryAccess, theScopedMemoryAccess)},
	{}
};

$MethodInfo _ScopedMemoryAccess_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)()>(&ScopedMemoryAccess::init$))},
	{"closeScope", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;)Z", nullptr, $PUBLIC},
	{"closeScope0", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError;)Z", nullptr, $NATIVE},
	{"compareAndExchangeDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDouble3},
	{"compareAndExchangeDoubleAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDoubleAcquire4},
	{"compareAndExchangeDoubleAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double,double)>(&ScopedMemoryAccess::compareAndExchangeDoubleAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDoubleAcquireInternal5},
	{"compareAndExchangeDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double,double)>(&ScopedMemoryAccess::compareAndExchangeDoubleInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDoubleInternal6},
	{"compareAndExchangeDoubleRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDoubleRelease7},
	{"compareAndExchangeDoubleReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double,double)>(&ScopedMemoryAccess::compareAndExchangeDoubleReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeDoubleReleaseInternal8},
	{"compareAndExchangeFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloat9},
	{"compareAndExchangeFloatAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloatAcquire10},
	{"compareAndExchangeFloatAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float,float)>(&ScopedMemoryAccess::compareAndExchangeFloatAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloatAcquireInternal11},
	{"compareAndExchangeFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float,float)>(&ScopedMemoryAccess::compareAndExchangeFloatInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloatInternal12},
	{"compareAndExchangeFloatRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloatRelease13},
	{"compareAndExchangeFloatReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float,float)>(&ScopedMemoryAccess::compareAndExchangeFloatReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeFloatReleaseInternal14},
	{"compareAndExchangeInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeInt15},
	{"compareAndExchangeIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeIntAcquire16},
	{"compareAndExchangeIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t,int32_t)>(&ScopedMemoryAccess::compareAndExchangeIntAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeIntAcquireInternal17},
	{"compareAndExchangeIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t,int32_t)>(&ScopedMemoryAccess::compareAndExchangeIntInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeIntInternal18},
	{"compareAndExchangeIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeIntRelease19},
	{"compareAndExchangeIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t,int32_t)>(&ScopedMemoryAccess::compareAndExchangeIntReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeIntReleaseInternal20},
	{"compareAndExchangeLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLong21},
	{"compareAndExchangeLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLongAcquire22},
	{"compareAndExchangeLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t,int64_t)>(&ScopedMemoryAccess::compareAndExchangeLongAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLongAcquireInternal23},
	{"compareAndExchangeLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t,int64_t)>(&ScopedMemoryAccess::compareAndExchangeLongInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLongInternal24},
	{"compareAndExchangeLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLongRelease25},
	{"compareAndExchangeLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t,int64_t)>(&ScopedMemoryAccess::compareAndExchangeLongReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndExchangeLongReleaseInternal26},
	{"compareAndSetDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndSetDouble27},
	{"compareAndSetDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double,double)>(&ScopedMemoryAccess::compareAndSetDoubleInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndSetDoubleInternal28},
	{"compareAndSetFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndSetFloat29},
	{"compareAndSetFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float,float)>(&ScopedMemoryAccess::compareAndSetFloatInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndSetFloatInternal30},
	{"compareAndSetInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndSetInt31},
	{"compareAndSetIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t,int32_t)>(&ScopedMemoryAccess::compareAndSetIntInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndSetIntInternal32},
	{"compareAndSetLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndSetLong33},
	{"compareAndSetLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t,int64_t)>(&ScopedMemoryAccess::compareAndSetLongInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_compareAndSetLongInternal34},
	{"copyMemory", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_copyMemory35},
	{"copyMemoryInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,$ScopedMemoryAccess$Scope*,Object$*,int64_t,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::copyMemoryInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_copyMemoryInternal36},
	{"copySwapMemory", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JJJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_copySwapMemory37},
	{"copySwapMemoryInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JJJ)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,$ScopedMemoryAccess$Scope*,Object$*,int64_t,Object$*,int64_t,int64_t,int64_t)>(&ScopedMemoryAccess::copySwapMemoryInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_copySwapMemoryInternal38},
	{"force", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/io/FileDescriptor;JZJJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_force39},
	{"forceInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/io/FileDescriptor;JZJJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_forceInternal40},
	{"getAndAddByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddByte41},
	{"getAndAddByteAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddByteAcquire42},
	{"getAndAddByteAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndAddByteAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddByteAcquireInternal43},
	{"getAndAddByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndAddByteInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddByteInternal44},
	{"getAndAddByteRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddByteRelease45},
	{"getAndAddByteReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndAddByteReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddByteReleaseInternal46},
	{"getAndAddChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddChar47},
	{"getAndAddCharAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddCharAcquire48},
	{"getAndAddCharAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndAddCharAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddCharAcquireInternal49},
	{"getAndAddCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndAddCharInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddCharInternal50},
	{"getAndAddCharRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddCharRelease51},
	{"getAndAddCharReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndAddCharReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddCharReleaseInternal52},
	{"getAndAddDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddDouble53},
	{"getAndAddDoubleAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddDoubleAcquire54},
	{"getAndAddDoubleAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double)>(&ScopedMemoryAccess::getAndAddDoubleAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddDoubleAcquireInternal55},
	{"getAndAddDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double)>(&ScopedMemoryAccess::getAndAddDoubleInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddDoubleInternal56},
	{"getAndAddDoubleRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddDoubleRelease57},
	{"getAndAddDoubleReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double)>(&ScopedMemoryAccess::getAndAddDoubleReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddDoubleReleaseInternal58},
	{"getAndAddFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddFloat59},
	{"getAndAddFloatAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddFloatAcquire60},
	{"getAndAddFloatAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float)>(&ScopedMemoryAccess::getAndAddFloatAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddFloatAcquireInternal61},
	{"getAndAddFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float)>(&ScopedMemoryAccess::getAndAddFloatInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddFloatInternal62},
	{"getAndAddFloatRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddFloatRelease63},
	{"getAndAddFloatReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float)>(&ScopedMemoryAccess::getAndAddFloatReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddFloatReleaseInternal64},
	{"getAndAddInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddInt65},
	{"getAndAddIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddIntAcquire66},
	{"getAndAddIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndAddIntAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddIntAcquireInternal67},
	{"getAndAddIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndAddIntInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddIntInternal68},
	{"getAndAddIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddIntRelease69},
	{"getAndAddIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndAddIntReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddIntReleaseInternal70},
	{"getAndAddLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddLong71},
	{"getAndAddLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddLongAcquire72},
	{"getAndAddLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndAddLongAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddLongAcquireInternal73},
	{"getAndAddLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndAddLongInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddLongInternal74},
	{"getAndAddLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddLongRelease75},
	{"getAndAddLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndAddLongReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddLongReleaseInternal76},
	{"getAndAddShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddShort77},
	{"getAndAddShortAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddShortAcquire78},
	{"getAndAddShortAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndAddShortAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddShortAcquireInternal79},
	{"getAndAddShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndAddShortInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddShortInternal80},
	{"getAndAddShortRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddShortRelease81},
	{"getAndAddShortReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndAddShortReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndAddShortReleaseInternal82},
	{"getAndBitwiseAndByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByte83},
	{"getAndBitwiseAndByteAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByteAcquire84},
	{"getAndBitwiseAndByteAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndBitwiseAndByteAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByteAcquireInternal85},
	{"getAndBitwiseAndByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndBitwiseAndByteInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByteInternal86},
	{"getAndBitwiseAndByteRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByteRelease87},
	{"getAndBitwiseAndByteReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndBitwiseAndByteReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndByteReleaseInternal88},
	{"getAndBitwiseAndChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndChar89},
	{"getAndBitwiseAndCharAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndCharAcquire90},
	{"getAndBitwiseAndCharAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndBitwiseAndCharAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndCharAcquireInternal91},
	{"getAndBitwiseAndCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndBitwiseAndCharInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndCharInternal92},
	{"getAndBitwiseAndCharRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndCharRelease93},
	{"getAndBitwiseAndCharReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndBitwiseAndCharReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndCharReleaseInternal94},
	{"getAndBitwiseAndInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndInt95},
	{"getAndBitwiseAndIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndIntAcquire96},
	{"getAndBitwiseAndIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndBitwiseAndIntAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndIntAcquireInternal97},
	{"getAndBitwiseAndIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndBitwiseAndIntInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndIntInternal98},
	{"getAndBitwiseAndIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndIntRelease99},
	{"getAndBitwiseAndIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndBitwiseAndIntReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndIntReleaseInternal100},
	{"getAndBitwiseAndLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLong101},
	{"getAndBitwiseAndLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLongAcquire102},
	{"getAndBitwiseAndLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndBitwiseAndLongAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLongAcquireInternal103},
	{"getAndBitwiseAndLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndBitwiseAndLongInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLongInternal104},
	{"getAndBitwiseAndLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLongRelease105},
	{"getAndBitwiseAndLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndBitwiseAndLongReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndLongReleaseInternal106},
	{"getAndBitwiseAndShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShort107},
	{"getAndBitwiseAndShortAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShortAcquire108},
	{"getAndBitwiseAndShortAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndBitwiseAndShortAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShortAcquireInternal109},
	{"getAndBitwiseAndShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndBitwiseAndShortInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShortInternal110},
	{"getAndBitwiseAndShortRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShortRelease111},
	{"getAndBitwiseAndShortReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndBitwiseAndShortReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseAndShortReleaseInternal112},
	{"getAndBitwiseOrByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByte113},
	{"getAndBitwiseOrByteAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByteAcquire114},
	{"getAndBitwiseOrByteAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndBitwiseOrByteAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByteAcquireInternal115},
	{"getAndBitwiseOrByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndBitwiseOrByteInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByteInternal116},
	{"getAndBitwiseOrByteRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByteRelease117},
	{"getAndBitwiseOrByteReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndBitwiseOrByteReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrByteReleaseInternal118},
	{"getAndBitwiseOrChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrChar119},
	{"getAndBitwiseOrCharAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrCharAcquire120},
	{"getAndBitwiseOrCharAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndBitwiseOrCharAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrCharAcquireInternal121},
	{"getAndBitwiseOrCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndBitwiseOrCharInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrCharInternal122},
	{"getAndBitwiseOrCharRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrCharRelease123},
	{"getAndBitwiseOrCharReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndBitwiseOrCharReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrCharReleaseInternal124},
	{"getAndBitwiseOrInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrInt125},
	{"getAndBitwiseOrIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrIntAcquire126},
	{"getAndBitwiseOrIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndBitwiseOrIntAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrIntAcquireInternal127},
	{"getAndBitwiseOrIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndBitwiseOrIntInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrIntInternal128},
	{"getAndBitwiseOrIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrIntRelease129},
	{"getAndBitwiseOrIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndBitwiseOrIntReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrIntReleaseInternal130},
	{"getAndBitwiseOrLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLong131},
	{"getAndBitwiseOrLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLongAcquire132},
	{"getAndBitwiseOrLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndBitwiseOrLongAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLongAcquireInternal133},
	{"getAndBitwiseOrLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndBitwiseOrLongInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLongInternal134},
	{"getAndBitwiseOrLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLongRelease135},
	{"getAndBitwiseOrLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndBitwiseOrLongReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrLongReleaseInternal136},
	{"getAndBitwiseOrShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShort137},
	{"getAndBitwiseOrShortAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShortAcquire138},
	{"getAndBitwiseOrShortAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndBitwiseOrShortAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShortAcquireInternal139},
	{"getAndBitwiseOrShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndBitwiseOrShortInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShortInternal140},
	{"getAndBitwiseOrShortRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShortRelease141},
	{"getAndBitwiseOrShortReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndBitwiseOrShortReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseOrShortReleaseInternal142},
	{"getAndBitwiseXorByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByte143},
	{"getAndBitwiseXorByteAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByteAcquire144},
	{"getAndBitwiseXorByteAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndBitwiseXorByteAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByteAcquireInternal145},
	{"getAndBitwiseXorByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndBitwiseXorByteInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByteInternal146},
	{"getAndBitwiseXorByteRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByteRelease147},
	{"getAndBitwiseXorByteReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::getAndBitwiseXorByteReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorByteReleaseInternal148},
	{"getAndBitwiseXorChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorChar149},
	{"getAndBitwiseXorCharAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorCharAcquire150},
	{"getAndBitwiseXorCharAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndBitwiseXorCharAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorCharAcquireInternal151},
	{"getAndBitwiseXorCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndBitwiseXorCharInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorCharInternal152},
	{"getAndBitwiseXorCharRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorCharRelease153},
	{"getAndBitwiseXorCharReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::getAndBitwiseXorCharReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorCharReleaseInternal154},
	{"getAndBitwiseXorInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorInt155},
	{"getAndBitwiseXorIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorIntAcquire156},
	{"getAndBitwiseXorIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndBitwiseXorIntAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorIntAcquireInternal157},
	{"getAndBitwiseXorIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndBitwiseXorIntInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorIntInternal158},
	{"getAndBitwiseXorIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorIntRelease159},
	{"getAndBitwiseXorIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndBitwiseXorIntReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorIntReleaseInternal160},
	{"getAndBitwiseXorLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLong161},
	{"getAndBitwiseXorLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLongAcquire162},
	{"getAndBitwiseXorLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndBitwiseXorLongAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLongAcquireInternal163},
	{"getAndBitwiseXorLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndBitwiseXorLongInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLongInternal164},
	{"getAndBitwiseXorLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLongRelease165},
	{"getAndBitwiseXorLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndBitwiseXorLongReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorLongReleaseInternal166},
	{"getAndBitwiseXorShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShort167},
	{"getAndBitwiseXorShortAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShortAcquire168},
	{"getAndBitwiseXorShortAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndBitwiseXorShortAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShortAcquireInternal169},
	{"getAndBitwiseXorShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndBitwiseXorShortInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShortInternal170},
	{"getAndBitwiseXorShortRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShortRelease171},
	{"getAndBitwiseXorShortReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::getAndBitwiseXorShortReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndBitwiseXorShortReleaseInternal172},
	{"getAndSetDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetDouble173},
	{"getAndSetDoubleAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetDoubleAcquire174},
	{"getAndSetDoubleAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double)>(&ScopedMemoryAccess::getAndSetDoubleAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetDoubleAcquireInternal175},
	{"getAndSetDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double)>(&ScopedMemoryAccess::getAndSetDoubleInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetDoubleInternal176},
	{"getAndSetDoubleRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetDoubleRelease177},
	{"getAndSetDoubleReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double)>(&ScopedMemoryAccess::getAndSetDoubleReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetDoubleReleaseInternal178},
	{"getAndSetFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetFloat179},
	{"getAndSetFloatAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetFloatAcquire180},
	{"getAndSetFloatAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float)>(&ScopedMemoryAccess::getAndSetFloatAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetFloatAcquireInternal181},
	{"getAndSetFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float)>(&ScopedMemoryAccess::getAndSetFloatInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetFloatInternal182},
	{"getAndSetFloatRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetFloatRelease183},
	{"getAndSetFloatReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float)>(&ScopedMemoryAccess::getAndSetFloatReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetFloatReleaseInternal184},
	{"getAndSetInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetInt185},
	{"getAndSetIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetIntAcquire186},
	{"getAndSetIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndSetIntAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetIntAcquireInternal187},
	{"getAndSetIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndSetIntInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetIntInternal188},
	{"getAndSetIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetIntRelease189},
	{"getAndSetIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::getAndSetIntReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetIntReleaseInternal190},
	{"getAndSetLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetLong191},
	{"getAndSetLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetLongAcquire192},
	{"getAndSetLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndSetLongAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetLongAcquireInternal193},
	{"getAndSetLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndSetLongInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetLongInternal194},
	{"getAndSetLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetLongRelease195},
	{"getAndSetLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::getAndSetLongReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getAndSetLongReleaseInternal196},
	{"getByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getByte197},
	{"getByteAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getByteAcquire198},
	{"getByteAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getByteAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getByteAcquireInternal199},
	{"getByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getByteInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getByteInternal200},
	{"getByteOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getByteOpaque201},
	{"getByteOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getByteOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getByteOpaqueInternal202},
	{"getByteVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getByteVolatile203},
	{"getByteVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)B", nullptr, $PRIVATE, $method(static_cast<int8_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getByteVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getByteVolatileInternal204},
	{"getChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getChar205},
	{"getCharAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getCharAcquire206},
	{"getCharAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getCharAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getCharAcquireInternal207},
	{"getCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getCharInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getCharInternal208},
	{"getCharOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getCharOpaque209},
	{"getCharOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getCharOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getCharOpaqueInternal210},
	{"getCharUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getCharUnaligned211},
	{"getCharUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,bool)>(&ScopedMemoryAccess::getCharUnalignedInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getCharUnalignedInternal212},
	{"getCharVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getCharVolatile213},
	{"getCharVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)C", nullptr, $PRIVATE, $method(static_cast<char16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getCharVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getCharVolatileInternal214},
	{"getDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getDouble215},
	{"getDoubleAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getDoubleAcquire216},
	{"getDoubleAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getDoubleAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getDoubleAcquireInternal217},
	{"getDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getDoubleInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getDoubleInternal218},
	{"getDoubleOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getDoubleOpaque219},
	{"getDoubleOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getDoubleOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getDoubleOpaqueInternal220},
	{"getDoubleVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getDoubleVolatile221},
	{"getDoubleVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)D", nullptr, $PRIVATE, $method(static_cast<double(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getDoubleVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getDoubleVolatileInternal222},
	{"getFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getFloat223},
	{"getFloatAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getFloatAcquire224},
	{"getFloatAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getFloatAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getFloatAcquireInternal225},
	{"getFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getFloatInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getFloatInternal226},
	{"getFloatOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getFloatOpaque227},
	{"getFloatOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getFloatOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getFloatOpaqueInternal228},
	{"getFloatVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getFloatVolatile229},
	{"getFloatVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)F", nullptr, $PRIVATE, $method(static_cast<float(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getFloatVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getFloatVolatileInternal230},
	{"getInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getInt231},
	{"getIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getIntAcquire232},
	{"getIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getIntAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getIntAcquireInternal233},
	{"getIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getIntInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getIntInternal234},
	{"getIntOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getIntOpaque235},
	{"getIntOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getIntOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getIntOpaqueInternal236},
	{"getIntUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getIntUnaligned237},
	{"getIntUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,bool)>(&ScopedMemoryAccess::getIntUnalignedInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getIntUnalignedInternal238},
	{"getIntVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getIntVolatile239},
	{"getIntVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getIntVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getIntVolatileInternal240},
	{"getLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getLong241},
	{"getLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getLongAcquire242},
	{"getLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getLongAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getLongAcquireInternal243},
	{"getLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getLongInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getLongInternal244},
	{"getLongOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getLongOpaque245},
	{"getLongOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getLongOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getLongOpaqueInternal246},
	{"getLongUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getLongUnaligned247},
	{"getLongUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,bool)>(&ScopedMemoryAccess::getLongUnalignedInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getLongUnalignedInternal248},
	{"getLongVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getLongVolatile249},
	{"getLongVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getLongVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getLongVolatileInternal250},
	{"getScopedMemoryAccess", "()Ljdk/internal/misc/ScopedMemoryAccess;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ScopedMemoryAccess*(*)()>(&ScopedMemoryAccess::getScopedMemoryAccess))},
	{"getShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getShort252},
	{"getShortAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getShortAcquire253},
	{"getShortAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getShortAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getShortAcquireInternal254},
	{"getShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getShortInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getShortInternal255},
	{"getShortOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getShortOpaque256},
	{"getShortOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getShortOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getShortOpaqueInternal257},
	{"getShortUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getShortUnaligned258},
	{"getShortUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JZ)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,bool)>(&ScopedMemoryAccess::getShortUnalignedInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getShortUnalignedInternal259},
	{"getShortVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getShortVolatile260},
	{"getShortVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;J)S", nullptr, $PRIVATE, $method(static_cast<int16_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t)>(&ScopedMemoryAccess::getShortVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_getShortVolatileInternal261},
	{"isLoaded", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_isLoaded262},
	{"isLoadedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_isLoadedInternal263},
	{"load", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_load264},
	{"loadFromByteBuffer", "(Ljava/lang/Class;Ljava/lang/Class;ILjava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$VectorSpecies;Ljdk/internal/vm/vector/VectorSupport$LoadOperation;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>(Ljava/lang/Class<+TV;>;Ljava/lang/Class<TE;>;ILjava/nio/ByteBuffer;ITS;Ljdk/internal/vm/vector/VectorSupport$LoadOperation<Ljava/nio/ByteBuffer;TV;TE;TS;>;)TV;", $PUBLIC | $STATIC, $method(static_cast<$VectorSupport$Vector*(*)($Class*,$Class*,int32_t,$ByteBuffer*,int32_t,$VectorSupport$VectorSpecies*,$VectorSupport$LoadOperation*)>(&ScopedMemoryAccess::loadFromByteBuffer)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_loadFromByteBuffer265},
	{"loadFromByteBufferScoped", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Class;Ljava/lang/Class;ILjava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$VectorSpecies;Ljdk/internal/vm/vector/VectorSupport$LoadOperation;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Class<+TV;>;Ljava/lang/Class<TE;>;ILjava/nio/ByteBuffer;ITS;Ljdk/internal/vm/vector/VectorSupport$LoadOperation<Ljava/nio/ByteBuffer;TV;TE;TS;>;)TV;", $PRIVATE | $STATIC, $method(static_cast<$VectorSupport$Vector*(*)($ScopedMemoryAccess$Scope*,$Class*,$Class*,int32_t,$ByteBuffer*,int32_t,$VectorSupport$VectorSpecies*,$VectorSupport$LoadOperation*)>(&ScopedMemoryAccess::loadFromByteBufferScoped)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_loadFromByteBufferScoped266},
	{"loadInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_loadInternal267},
	{"putByte", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putByte268},
	{"putByteInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::putByteInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putByteInternal269},
	{"putByteOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putByteOpaque270},
	{"putByteOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::putByteOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putByteOpaqueInternal271},
	{"putByteRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putByteRelease272},
	{"putByteReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::putByteReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putByteReleaseInternal273},
	{"putByteVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putByteVolatile274},
	{"putByteVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JB)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int8_t)>(&ScopedMemoryAccess::putByteVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putByteVolatileInternal275},
	{"putChar", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putChar276},
	{"putCharInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::putCharInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putCharInternal277},
	{"putCharOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putCharOpaque278},
	{"putCharOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::putCharOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putCharOpaqueInternal279},
	{"putCharRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putCharRelease280},
	{"putCharReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::putCharReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putCharReleaseInternal281},
	{"putCharUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JCZ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putCharUnaligned282},
	{"putCharUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JCZ)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t,bool)>(&ScopedMemoryAccess::putCharUnalignedInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putCharUnalignedInternal283},
	{"putCharVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putCharVolatile284},
	{"putCharVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JC)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,char16_t)>(&ScopedMemoryAccess::putCharVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putCharVolatileInternal285},
	{"putDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putDouble286},
	{"putDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double)>(&ScopedMemoryAccess::putDoubleInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putDoubleInternal287},
	{"putDoubleOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putDoubleOpaque288},
	{"putDoubleOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double)>(&ScopedMemoryAccess::putDoubleOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putDoubleOpaqueInternal289},
	{"putDoubleRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putDoubleRelease290},
	{"putDoubleReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double)>(&ScopedMemoryAccess::putDoubleReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putDoubleReleaseInternal291},
	{"putDoubleVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putDoubleVolatile292},
	{"putDoubleVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JD)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double)>(&ScopedMemoryAccess::putDoubleVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putDoubleVolatileInternal293},
	{"putFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putFloat294},
	{"putFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float)>(&ScopedMemoryAccess::putFloatInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putFloatInternal295},
	{"putFloatOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putFloatOpaque296},
	{"putFloatOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float)>(&ScopedMemoryAccess::putFloatOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putFloatOpaqueInternal297},
	{"putFloatRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putFloatRelease298},
	{"putFloatReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float)>(&ScopedMemoryAccess::putFloatReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putFloatReleaseInternal299},
	{"putFloatVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putFloatVolatile300},
	{"putFloatVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JF)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float)>(&ScopedMemoryAccess::putFloatVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putFloatVolatileInternal301},
	{"putInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putInt302},
	{"putIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::putIntInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putIntInternal303},
	{"putIntOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putIntOpaque304},
	{"putIntOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::putIntOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putIntOpaqueInternal305},
	{"putIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putIntRelease306},
	{"putIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::putIntReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putIntReleaseInternal307},
	{"putIntUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JIZ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putIntUnaligned308},
	{"putIntUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JIZ)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t,bool)>(&ScopedMemoryAccess::putIntUnalignedInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putIntUnalignedInternal309},
	{"putIntVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putIntVolatile310},
	{"putIntVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JI)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t)>(&ScopedMemoryAccess::putIntVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putIntVolatileInternal311},
	{"putLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putLong312},
	{"putLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::putLongInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putLongInternal313},
	{"putLongOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putLongOpaque314},
	{"putLongOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::putLongOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putLongOpaqueInternal315},
	{"putLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putLongRelease316},
	{"putLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::putLongReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putLongReleaseInternal317},
	{"putLongUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJZ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putLongUnaligned318},
	{"putLongUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJZ)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t,bool)>(&ScopedMemoryAccess::putLongUnalignedInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putLongUnalignedInternal319},
	{"putLongVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putLongVolatile320},
	{"putLongVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJ)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t)>(&ScopedMemoryAccess::putLongVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putLongVolatileInternal321},
	{"putShort", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putShort322},
	{"putShortInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::putShortInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putShortInternal323},
	{"putShortOpaque", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putShortOpaque324},
	{"putShortOpaqueInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::putShortOpaqueInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putShortOpaqueInternal325},
	{"putShortRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putShortRelease326},
	{"putShortReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::putShortReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putShortReleaseInternal327},
	{"putShortUnaligned", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JSZ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putShortUnaligned328},
	{"putShortUnalignedInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JSZ)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t,bool)>(&ScopedMemoryAccess::putShortUnalignedInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putShortUnalignedInternal329},
	{"putShortVolatile", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putShortVolatile330},
	{"putShortVolatileInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JS)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int16_t)>(&ScopedMemoryAccess::putShortVolatileInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_putShortVolatileInternal331},
	{"registerNatives", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&ScopedMemoryAccess::registerNatives))},
	{"setMemory", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJB)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_setMemory333},
	{"setMemoryInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJB)V", nullptr, $PRIVATE, $method(static_cast<void(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t,int8_t)>(&ScopedMemoryAccess::setMemoryInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_setMemoryInternal334},
	{"storeIntoByteBuffer", "(Ljava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;Ljava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$StoreVectorOperation;)V", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;E:Ljava/lang/Object;>(Ljava/lang/Class<+TV;>;Ljava/lang/Class<TE;>;ITV;Ljava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$StoreVectorOperation<Ljava/nio/ByteBuffer;TV;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*,$Class*,int32_t,$VectorSupport$Vector*,$ByteBuffer*,int32_t,$VectorSupport$StoreVectorOperation*)>(&ScopedMemoryAccess::storeIntoByteBuffer)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_storeIntoByteBuffer335},
	{"storeIntoByteBufferScoped", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Class;Ljava/lang/Class;ILjdk/internal/vm/vector/VectorSupport$Vector;Ljava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$StoreVectorOperation;)V", "<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;E:Ljava/lang/Object;>(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Class<+TV;>;Ljava/lang/Class<TE;>;ITV;Ljava/nio/ByteBuffer;ILjdk/internal/vm/vector/VectorSupport$StoreVectorOperation<Ljava/nio/ByteBuffer;TV;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($ScopedMemoryAccess$Scope*,$Class*,$Class*,int32_t,$VectorSupport$Vector*,$ByteBuffer*,int32_t,$VectorSupport$StoreVectorOperation*)>(&ScopedMemoryAccess::storeIntoByteBufferScoped)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_storeIntoByteBufferScoped336},
	{"unload", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_unload337},
	{"unloadInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;JZJ)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_unloadInternal338},
	{"vectorizedMismatch", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JII)I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_vectorizedMismatch339},
	{"vectorizedMismatchInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JLjava/lang/Object;JII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,$ScopedMemoryAccess$Scope*,Object$*,int64_t,Object$*,int64_t,int32_t,int32_t)>(&ScopedMemoryAccess::vectorizedMismatchInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_vectorizedMismatchInternal340},
	{"weakCompareAndSetDouble", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDouble341},
	{"weakCompareAndSetDoubleAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoubleAcquire342},
	{"weakCompareAndSetDoubleAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double,double)>(&ScopedMemoryAccess::weakCompareAndSetDoubleAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoubleAcquireInternal343},
	{"weakCompareAndSetDoubleInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double,double)>(&ScopedMemoryAccess::weakCompareAndSetDoubleInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoubleInternal344},
	{"weakCompareAndSetDoublePlain", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoublePlain345},
	{"weakCompareAndSetDoublePlainInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double,double)>(&ScopedMemoryAccess::weakCompareAndSetDoublePlainInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoublePlainInternal346},
	{"weakCompareAndSetDoubleRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoubleRelease347},
	{"weakCompareAndSetDoubleReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JDD)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,double,double)>(&ScopedMemoryAccess::weakCompareAndSetDoubleReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetDoubleReleaseInternal348},
	{"weakCompareAndSetFloat", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloat349},
	{"weakCompareAndSetFloatAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatAcquire350},
	{"weakCompareAndSetFloatAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float,float)>(&ScopedMemoryAccess::weakCompareAndSetFloatAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatAcquireInternal351},
	{"weakCompareAndSetFloatInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float,float)>(&ScopedMemoryAccess::weakCompareAndSetFloatInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatInternal352},
	{"weakCompareAndSetFloatPlain", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatPlain353},
	{"weakCompareAndSetFloatPlainInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float,float)>(&ScopedMemoryAccess::weakCompareAndSetFloatPlainInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatPlainInternal354},
	{"weakCompareAndSetFloatRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatRelease355},
	{"weakCompareAndSetFloatReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JFF)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,float,float)>(&ScopedMemoryAccess::weakCompareAndSetFloatReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetFloatReleaseInternal356},
	{"weakCompareAndSetInt", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetInt357},
	{"weakCompareAndSetIntAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntAcquire358},
	{"weakCompareAndSetIntAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t,int32_t)>(&ScopedMemoryAccess::weakCompareAndSetIntAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntAcquireInternal359},
	{"weakCompareAndSetIntInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t,int32_t)>(&ScopedMemoryAccess::weakCompareAndSetIntInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntInternal360},
	{"weakCompareAndSetIntPlain", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntPlain361},
	{"weakCompareAndSetIntPlainInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t,int32_t)>(&ScopedMemoryAccess::weakCompareAndSetIntPlainInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntPlainInternal362},
	{"weakCompareAndSetIntRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntRelease363},
	{"weakCompareAndSetIntReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JII)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int32_t,int32_t)>(&ScopedMemoryAccess::weakCompareAndSetIntReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetIntReleaseInternal364},
	{"weakCompareAndSetLong", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLong365},
	{"weakCompareAndSetLongAcquire", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongAcquire366},
	{"weakCompareAndSetLongAcquireInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t,int64_t)>(&ScopedMemoryAccess::weakCompareAndSetLongAcquireInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongAcquireInternal367},
	{"weakCompareAndSetLongInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t,int64_t)>(&ScopedMemoryAccess::weakCompareAndSetLongInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongInternal368},
	{"weakCompareAndSetLongPlain", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongPlain369},
	{"weakCompareAndSetLongPlainInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t,int64_t)>(&ScopedMemoryAccess::weakCompareAndSetLongPlainInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongPlainInternal370},
	{"weakCompareAndSetLongRelease", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongRelease371},
	{"weakCompareAndSetLongReleaseInternal", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope;Ljava/lang/Object;JJJ)Z", nullptr, $PRIVATE, $method(static_cast<bool(ScopedMemoryAccess::*)($ScopedMemoryAccess$Scope*,Object$*,int64_t,int64_t,int64_t)>(&ScopedMemoryAccess::weakCompareAndSetLongReleaseInternal)), nullptr, nullptr, _ScopedMemoryAccess_MethodAnnotations_weakCompareAndSetLongReleaseInternal372},
	{}
};

#define _METHOD_INDEX_closeScope0 2
#define _METHOD_INDEX_registerNatives 332

$InnerClassInfo _ScopedMemoryAccess_InnerClassesInfo_[] = {
	{"jdk.internal.misc.ScopedMemoryAccess$BufferAccess", "jdk.internal.misc.ScopedMemoryAccess", "BufferAccess", $STATIC | $FINAL},
	{"jdk.internal.misc.ScopedMemoryAccess$Scoped", "jdk.internal.misc.ScopedMemoryAccess", "Scoped", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{"jdk.internal.misc.ScopedMemoryAccess$Scope", "jdk.internal.misc.ScopedMemoryAccess", "Scope", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ScopedMemoryAccess_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.misc.ScopedMemoryAccess",
	"java.lang.Object",
	nullptr,
	_ScopedMemoryAccess_FieldInfo_,
	_ScopedMemoryAccess_MethodInfo_,
	nullptr,
	nullptr,
	_ScopedMemoryAccess_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.misc.ScopedMemoryAccess$BufferAccess,jdk.internal.misc.ScopedMemoryAccess$Scoped,jdk.internal.misc.ScopedMemoryAccess$Scope,jdk.internal.misc.ScopedMemoryAccess$Scope$ScopedAccessError,jdk.internal.misc.ScopedMemoryAccess$Scope$Handle"
};

$Object* allocate$ScopedMemoryAccess($Class* clazz) {
	return $of($alloc(ScopedMemoryAccess));
}

$Unsafe* ScopedMemoryAccess::UNSAFE = nullptr;
ScopedMemoryAccess* ScopedMemoryAccess::theScopedMemoryAccess = nullptr;

void ScopedMemoryAccess::registerNatives() {
	$init(ScopedMemoryAccess);
	$prepareNativeStatic(ScopedMemoryAccess, registerNatives, void);
	$invokeNativeStatic(ScopedMemoryAccess, registerNatives);
	$finishNativeStatic();
}

bool ScopedMemoryAccess::closeScope($ScopedMemoryAccess$Scope* scope) {
	$init($ScopedMemoryAccess$Scope$ScopedAccessError);
	return closeScope0(scope, $ScopedMemoryAccess$Scope$ScopedAccessError::INSTANCE);
}

bool ScopedMemoryAccess::closeScope0($ScopedMemoryAccess$Scope* scope, $ScopedMemoryAccess$Scope$ScopedAccessError* exception) {
	bool $ret = false;
	$prepareNative(ScopedMemoryAccess, closeScope0, bool, $ScopedMemoryAccess$Scope* scope, $ScopedMemoryAccess$Scope$ScopedAccessError* exception);
	$ret = $invokeNative(ScopedMemoryAccess, closeScope0, scope, exception);
	$finishNative();
	return $ret;
}

void ScopedMemoryAccess::init$() {
}

ScopedMemoryAccess* ScopedMemoryAccess::getScopedMemoryAccess() {
	$init(ScopedMemoryAccess);
	return ScopedMemoryAccess::theScopedMemoryAccess;
}

void ScopedMemoryAccess::copyMemory($ScopedMemoryAccess$Scope* srcScope, $ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes) {
	try {
		copyMemoryInternal(srcScope, dstScope, srcBase, srcOffset, destBase, destOffset, bytes);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::copyMemoryInternal($ScopedMemoryAccess$Scope* srcScope, $ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (srcScope != nullptr) {
				srcScope->checkValidState();
			}
			if (dstScope != nullptr) {
				dstScope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->copyMemory(srcBase, srcOffset, destBase, destOffset, bytes);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(srcScope);
			$Reference::reachabilityFence(dstScope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ScopedMemoryAccess::copySwapMemory($ScopedMemoryAccess$Scope* srcScope, $ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize) {
	try {
		copySwapMemoryInternal(srcScope, dstScope, srcBase, srcOffset, destBase, destOffset, bytes, elemSize);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::copySwapMemoryInternal($ScopedMemoryAccess$Scope* srcScope, $ScopedMemoryAccess$Scope* dstScope, Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes, int64_t elemSize) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (srcScope != nullptr) {
				srcScope->checkValidState();
			}
			if (dstScope != nullptr) {
				dstScope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->copySwapMemory(srcBase, srcOffset, destBase, destOffset, bytes, elemSize);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(srcScope);
			$Reference::reachabilityFence(dstScope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ScopedMemoryAccess::setMemory($ScopedMemoryAccess$Scope* scope, Object$* o, int64_t offset, int64_t bytes, int8_t value) {
	try {
		setMemoryInternal(scope, o, offset, bytes, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::setMemoryInternal($ScopedMemoryAccess$Scope* scope, Object$* o, int64_t offset, int64_t bytes, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->setMemory(o, offset, bytes, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t ScopedMemoryAccess::vectorizedMismatch($ScopedMemoryAccess$Scope* aScope, $ScopedMemoryAccess$Scope* bScope, Object$* a, int64_t aOffset, Object$* b, int64_t bOffset, int32_t length, int32_t log2ArrayIndexScale) {
	try {
		return vectorizedMismatchInternal(aScope, bScope, a, aOffset, b, bOffset, length, log2ArrayIndexScale);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::vectorizedMismatchInternal($ScopedMemoryAccess$Scope* aScope, $ScopedMemoryAccess$Scope* bScope, Object$* a, int64_t aOffset, Object$* b, int64_t bOffset, int32_t length, int32_t log2ArrayIndexScale) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (aScope != nullptr) {
				aScope->checkValidState();
			}
			if (bScope != nullptr) {
				bScope->checkValidState();
			}
			var$2 = $ArraysSupport::vectorizedMismatch(a, aOffset, b, bOffset, length, log2ArrayIndexScale);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(aScope);
			$Reference::reachabilityFence(bScope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::isLoaded($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	try {
		return isLoadedInternal(scope, address, isSync, size);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::isLoadedInternal($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc($($SharedSecrets::getJavaNioAccess()))->isLoaded(address, isSync, size);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::load($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	try {
		loadInternal(scope, address, isSync, size);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::loadInternal($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc($($SharedSecrets::getJavaNioAccess()))->load(address, isSync, size);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ScopedMemoryAccess::unload($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	try {
		unloadInternal(scope, address, isSync, size);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::unloadInternal($ScopedMemoryAccess$Scope* scope, int64_t address, bool isSync, int64_t size) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc($($SharedSecrets::getJavaNioAccess()))->unload(address, isSync, size);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ScopedMemoryAccess::force($ScopedMemoryAccess$Scope* scope, $FileDescriptor* fd, int64_t address, bool isSync, int64_t index, int64_t length) {
	try {
		forceInternal(scope, fd, address, isSync, index, length);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::forceInternal($ScopedMemoryAccess$Scope* scope, $FileDescriptor* fd, int64_t address, bool isSync, int64_t index, int64_t length) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc($($SharedSecrets::getJavaNioAccess()))->force(fd, address, isSync, index, length);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$VectorSupport$Vector* ScopedMemoryAccess::loadFromByteBuffer($Class* vmClass, $Class* e, int32_t length, $ByteBuffer* bb, int32_t offset, $VectorSupport$VectorSpecies* s, $VectorSupport$LoadOperation* defaultImpl) {
	$init(ScopedMemoryAccess);
	try {
		return loadFromByteBufferScoped($($ScopedMemoryAccess$BufferAccess::scope(bb)), vmClass, e, length, bb, offset, s, defaultImpl);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

$VectorSupport$Vector* ScopedMemoryAccess::loadFromByteBufferScoped($ScopedMemoryAccess$Scope* scope, $Class* vmClass, $Class* e, int32_t length, $ByteBuffer* bb, int32_t offset, $VectorSupport$VectorSpecies* s, $VectorSupport$LoadOperation* defaultImpl) {
	$init(ScopedMemoryAccess);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		$var($VectorSupport$Vector, var$2, nullptr);
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$Class* var$3 = vmClass;
			$Class* var$4 = e;
			int32_t var$5 = length;
			$var($Object, var$6, $ScopedMemoryAccess$BufferAccess::bufferBase(bb));
			$assign(var$2, $cast($VectorSupport$Vector, $VectorSupport::load(var$3, var$4, var$5, var$6, $ScopedMemoryAccess$BufferAccess::bufferAddress(bb, offset), bb, offset, s, defaultImpl)));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::storeIntoByteBuffer($Class* vmClass, $Class* e, int32_t length, $VectorSupport$Vector* v, $ByteBuffer* bb, int32_t offset, $VectorSupport$StoreVectorOperation* defaultImpl) {
	$init(ScopedMemoryAccess);
	try {
		storeIntoByteBufferScoped($($ScopedMemoryAccess$BufferAccess::scope(bb)), vmClass, e, length, v, bb, offset, defaultImpl);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::storeIntoByteBufferScoped($ScopedMemoryAccess$Scope* scope, $Class* vmClass, $Class* e, int32_t length, $VectorSupport$Vector* v, $ByteBuffer* bb, int32_t offset, $VectorSupport$StoreVectorOperation* defaultImpl) {
	$init(ScopedMemoryAccess);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$Class* var$1 = vmClass;
			$Class* var$2 = e;
			int32_t var$3 = length;
			$var($Object, var$4, $ScopedMemoryAccess$BufferAccess::bufferBase(bb));
			$VectorSupport::store(var$1, var$2, var$3, var$4, $ScopedMemoryAccess$BufferAccess::bufferAddress(bb, offset), v, bb, offset, defaultImpl);
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int8_t ScopedMemoryAccess::getByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getByteInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getByte(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		putByteInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putByte(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int8_t ScopedMemoryAccess::getByteVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getByteVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getByteVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getByteVolatile(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putByteVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		putByteVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putByteVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putByteVolatile(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int8_t ScopedMemoryAccess::getByteAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getByteAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getByteAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getByteAcquire(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putByteRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		putByteReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putByteReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putByteRelease(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int8_t ScopedMemoryAccess::getByteOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getByteOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getByteOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getByteOpaque(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putByteOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		putByteOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putByteOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putByteOpaque(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int8_t ScopedMemoryAccess::getAndAddByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	try {
		return getAndAddByteInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndAddByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddByte(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndAddByteAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	try {
		return getAndAddByteAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndAddByteAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddByteAcquire(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndAddByteRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	try {
		return getAndAddByteReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndAddByteReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddByteRelease(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseOrByteInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrByte(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByteAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseOrByteAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByteAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrByteAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByteRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseOrByteReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseOrByteReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrByteRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseAndByteInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndByte(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByteAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseAndByteAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByteAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndByteAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByteRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseAndByteReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseAndByteReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndByteRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByte($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseXorByteInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByteInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorByte(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByteAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseXorByteAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByteAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorByteAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByteRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	try {
		return getAndBitwiseXorByteReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int8_t ScopedMemoryAccess::getAndBitwiseXorByteReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int8_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int8_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorByteRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getShortInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getShort(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		putShortInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putShort(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int16_t ScopedMemoryAccess::getShortUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	try {
		return getShortUnalignedInternal(scope, base, offset, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShortUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getShortUnaligned(base, offset, be);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putShortUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value, bool be) {
	try {
		putShortUnalignedInternal(scope, base, offset, value, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putShortUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value, bool be) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putShortUnaligned(base, offset, value, be);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int16_t ScopedMemoryAccess::getShortVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getShortVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShortVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getShortVolatile(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putShortVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		putShortVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putShortVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putShortVolatile(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int16_t ScopedMemoryAccess::getShortAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getShortAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShortAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getShortAcquire(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putShortRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		putShortReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putShortReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putShortRelease(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int16_t ScopedMemoryAccess::getShortOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getShortOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getShortOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getShortOpaque(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putShortOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		putShortOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putShortOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putShortOpaque(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int16_t ScopedMemoryAccess::getAndAddShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	try {
		return getAndAddShortInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndAddShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddShort(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndAddShortAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	try {
		return getAndAddShortAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndAddShortAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddShortAcquire(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndAddShortRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	try {
		return getAndAddShortReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndAddShortReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddShortRelease(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseOrShortInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrShort(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShortAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseOrShortAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShortAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrShortAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShortRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseOrShortReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseOrShortReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrShortRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseAndShortInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndShort(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShortAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseAndShortAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShortAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndShortAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShortRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseAndShortReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseAndShortReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndShortRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShort($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseXorShortInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShortInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorShort(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShortAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseXorShortAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShortAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorShortAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShortRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	try {
		return getAndBitwiseXorShortReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int16_t ScopedMemoryAccess::getAndBitwiseXorShortReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorShortRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getCharInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getChar(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		putCharInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putChar(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

char16_t ScopedMemoryAccess::getCharUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	try {
		return getCharUnalignedInternal(scope, base, offset, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getCharUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getCharUnaligned(base, offset, be);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putCharUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value, bool be) {
	try {
		putCharUnalignedInternal(scope, base, offset, value, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putCharUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value, bool be) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putCharUnaligned(base, offset, value, be);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

char16_t ScopedMemoryAccess::getCharVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getCharVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getCharVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getCharVolatile(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putCharVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		putCharVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putCharVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putCharVolatile(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

char16_t ScopedMemoryAccess::getCharAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getCharAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getCharAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getCharAcquire(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putCharRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		putCharReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putCharReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putCharRelease(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

char16_t ScopedMemoryAccess::getCharOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getCharOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getCharOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getCharOpaque(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putCharOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		putCharOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putCharOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putCharOpaque(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

char16_t ScopedMemoryAccess::getAndAddChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	try {
		return getAndAddCharInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndAddCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddChar(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndAddCharAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	try {
		return getAndAddCharAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndAddCharAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddCharAcquire(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndAddCharRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	try {
		return getAndAddCharReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndAddCharReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddCharRelease(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseOrCharInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrChar(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrCharAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseOrCharAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrCharAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrCharAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrCharRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseOrCharReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseOrCharReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrCharRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseAndCharInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndChar(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndCharAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseAndCharAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndCharAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndCharAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndCharRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseAndCharReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseAndCharReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndCharRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorChar($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseXorCharInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorCharInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorChar(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorCharAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseXorCharAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorCharAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorCharAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorCharRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	try {
		return getAndBitwiseXorCharReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

char16_t ScopedMemoryAccess::getAndBitwiseXorCharReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, char16_t value) {
	{
		$var($Throwable, var$0, nullptr);
		char16_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorCharRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getIntInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getInt(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		putIntInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putInt(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t ScopedMemoryAccess::getIntUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	try {
		return getIntUnalignedInternal(scope, base, offset, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getIntUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getIntUnaligned(base, offset, be);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putIntUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value, bool be) {
	try {
		putIntUnalignedInternal(scope, base, offset, value, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putIntUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value, bool be) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putIntUnaligned(base, offset, value, be);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t ScopedMemoryAccess::getIntVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getIntVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getIntVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getIntVolatile(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putIntVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		putIntVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putIntVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putIntVolatile(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t ScopedMemoryAccess::getIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getIntAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getIntAcquire(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		putIntReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putIntRelease(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t ScopedMemoryAccess::getIntOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getIntOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getIntOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getIntOpaque(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putIntOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		putIntOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putIntOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putIntOpaque(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool ScopedMemoryAccess::compareAndSetInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return compareAndSetIntInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::compareAndSetIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndSetInt(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return compareAndExchangeIntInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeInt(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return compareAndExchangeIntAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeIntAcquire(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return compareAndExchangeIntReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::compareAndExchangeIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeIntRelease(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntPlain($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return weakCompareAndSetIntPlainInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntPlainInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetIntPlain(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return weakCompareAndSetIntInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetInt(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return weakCompareAndSetIntAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetIntAcquire(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	try {
		return weakCompareAndSetIntReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t expected, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetIntRelease(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndSetIntInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetInt(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndSetIntAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetIntAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndSetIntReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndSetIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetIntRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	try {
		return getAndAddIntInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddInt(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	try {
		return getAndAddIntAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddIntAcquire(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	try {
		return getAndAddIntReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndAddIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddIntRelease(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseOrIntInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrInt(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseOrIntAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrIntAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseOrIntReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseOrIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrIntRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseAndIntInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndInt(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseAndIntAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndIntAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseAndIntReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseAndIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndIntRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorInt($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseXorIntInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorIntInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorInt(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorIntAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseXorIntAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorIntAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorIntAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorIntRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	try {
		return getAndBitwiseXorIntReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int32_t ScopedMemoryAccess::getAndBitwiseXorIntReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int32_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorIntRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getLongInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getLong(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		putLongInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putLong(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int64_t ScopedMemoryAccess::getLongUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	try {
		return getLongUnalignedInternal(scope, base, offset, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLongUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, bool be) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getLongUnaligned(base, offset, be);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putLongUnaligned($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value, bool be) {
	try {
		putLongUnalignedInternal(scope, base, offset, value, be);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putLongUnalignedInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value, bool be) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putLongUnaligned(base, offset, value, be);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int64_t ScopedMemoryAccess::getLongVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getLongVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLongVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getLongVolatile(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putLongVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		putLongVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putLongVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putLongVolatile(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int64_t ScopedMemoryAccess::getLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getLongAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getLongAcquire(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		putLongReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putLongRelease(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int64_t ScopedMemoryAccess::getLongOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getLongOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getLongOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getLongOpaque(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putLongOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		putLongOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putLongOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putLongOpaque(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool ScopedMemoryAccess::compareAndSetLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return compareAndSetLongInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::compareAndSetLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndSetLong(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return compareAndExchangeLongInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeLong(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return compareAndExchangeLongAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeLongAcquire(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return compareAndExchangeLongReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::compareAndExchangeLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeLongRelease(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongPlain($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return weakCompareAndSetLongPlainInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongPlainInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetLongPlain(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return weakCompareAndSetLongInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetLong(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return weakCompareAndSetLongAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetLongAcquire(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	try {
		return weakCompareAndSetLongReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t expected, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetLongRelease(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndSetLongInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetLong(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndSetLongAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetLongAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndSetLongReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndSetLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetLongRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	try {
		return getAndAddLongInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddLong(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	try {
		return getAndAddLongAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddLongAcquire(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	try {
		return getAndAddLongReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndAddLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t delta) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddLongRelease(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseOrLongInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrLong(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseOrLongAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrLongAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseOrLongReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseOrLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseOrLongRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseAndLongInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndLong(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseAndLongAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndLongAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseAndLongReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseAndLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseAndLongRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLong($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseXorLongInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLongInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorLong(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLongAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseXorLongAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLongAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorLongAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLongRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	try {
		return getAndBitwiseXorLongReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

int64_t ScopedMemoryAccess::getAndBitwiseXorLongReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, int64_t value) {
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndBitwiseXorLongRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getFloatInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getFloat(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		putFloatInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putFloat(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

float ScopedMemoryAccess::getFloatVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getFloatVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getFloatVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getFloatVolatile(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putFloatVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		putFloatVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putFloatVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putFloatVolatile(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

float ScopedMemoryAccess::getFloatAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getFloatAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getFloatAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getFloatAcquire(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putFloatRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		putFloatReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putFloatReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putFloatRelease(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

float ScopedMemoryAccess::getFloatOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getFloatOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getFloatOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getFloatOpaque(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putFloatOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		putFloatOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putFloatOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putFloatOpaque(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool ScopedMemoryAccess::compareAndSetFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return compareAndSetFloatInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::compareAndSetFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndSetFloat(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return compareAndExchangeFloatInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeFloat(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloatAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return compareAndExchangeFloatAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloatAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeFloatAcquire(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloatRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return compareAndExchangeFloatReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::compareAndExchangeFloatReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeFloatRelease(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatPlain($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return weakCompareAndSetFloatPlainInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatPlainInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetFloatPlain(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return weakCompareAndSetFloatInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetFloat(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return weakCompareAndSetFloatAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetFloatAcquire(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	try {
		return weakCompareAndSetFloatReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetFloatReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float expected, float value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetFloatRelease(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		return getAndSetFloatInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetFloat(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloatAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		return getAndSetFloatAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloatAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetFloatAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloatRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	try {
		return getAndSetFloatReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndSetFloatReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float value) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetFloatRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloat($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	try {
		return getAndAddFloatInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloatInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddFloat(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloatAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	try {
		return getAndAddFloatAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloatAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddFloatAcquire(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloatRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	try {
		return getAndAddFloatReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

float ScopedMemoryAccess::getAndAddFloatReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, float delta) {
	{
		$var($Throwable, var$0, nullptr);
		float var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddFloatRelease(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getDoubleInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getDouble(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		putDoubleInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putDouble(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

double ScopedMemoryAccess::getDoubleVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getDoubleVolatileInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getDoubleVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getDoubleVolatile(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putDoubleVolatile($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		putDoubleVolatileInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putDoubleVolatileInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putDoubleVolatile(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

double ScopedMemoryAccess::getDoubleAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getDoubleAcquireInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getDoubleAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getDoubleAcquire(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putDoubleRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		putDoubleReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putDoubleReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putDoubleRelease(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

double ScopedMemoryAccess::getDoubleOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	try {
		return getDoubleOpaqueInternal(scope, base, offset);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getDoubleOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getDoubleOpaque(base, offset);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ScopedMemoryAccess::putDoubleOpaque($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		putDoubleOpaqueInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
}

void ScopedMemoryAccess::putDoubleOpaqueInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			$nc(ScopedMemoryAccess::UNSAFE)->putDoubleOpaque(base, offset, value);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool ScopedMemoryAccess::compareAndSetDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return compareAndSetDoubleInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::compareAndSetDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndSetDouble(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return compareAndExchangeDoubleInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeDouble(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDoubleAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return compareAndExchangeDoubleAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDoubleAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeDoubleAcquire(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDoubleRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return compareAndExchangeDoubleReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::compareAndExchangeDoubleReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->compareAndExchangeDoubleRelease(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoublePlain($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return weakCompareAndSetDoublePlainInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoublePlainInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetDoublePlain(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return weakCompareAndSetDoubleInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetDouble(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoubleAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return weakCompareAndSetDoubleAcquireInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoubleAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetDoubleAcquire(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoubleRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	try {
		return weakCompareAndSetDoubleReleaseInternal(scope, base, offset, expected, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

bool ScopedMemoryAccess::weakCompareAndSetDoubleReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double expected, double value) {
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->weakCompareAndSetDoubleRelease(base, offset, expected, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		return getAndSetDoubleInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetDouble(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDoubleAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		return getAndSetDoubleAcquireInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDoubleAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetDoubleAcquire(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDoubleRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	try {
		return getAndSetDoubleReleaseInternal(scope, base, offset, value);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndSetDoubleReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double value) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndSetDoubleRelease(base, offset, value);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDouble($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	try {
		return getAndAddDoubleInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDoubleInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddDouble(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDoubleAcquire($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	try {
		return getAndAddDoubleAcquireInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDoubleAcquireInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddDoubleAcquire(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDoubleRelease($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	try {
		return getAndAddDoubleReleaseInternal(scope, base, offset, delta);
	} catch ($ScopedMemoryAccess$Scope$ScopedAccessError& ex) {
		$throwNew($IllegalStateException, "This segment is already closed"_s);
	}
	$shouldNotReachHere();
}

double ScopedMemoryAccess::getAndAddDoubleReleaseInternal($ScopedMemoryAccess$Scope* scope, Object$* base, int64_t offset, double delta) {
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			if (scope != nullptr) {
				scope->checkValidState();
			}
			var$2 = $nc(ScopedMemoryAccess::UNSAFE)->getAndAddDoubleRelease(base, offset, delta);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Reference::reachabilityFence(scope);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void clinit$ScopedMemoryAccess($Class* class$) {
	$assignStatic(ScopedMemoryAccess::UNSAFE, $Unsafe::getUnsafe());
	{
		ScopedMemoryAccess::registerNatives();
	}
	$assignStatic(ScopedMemoryAccess::theScopedMemoryAccess, $new(ScopedMemoryAccess));
}

ScopedMemoryAccess::ScopedMemoryAccess() {
}

$Class* ScopedMemoryAccess::load$($String* name, bool initialize) {
	$loadClass(ScopedMemoryAccess, name, initialize, &_ScopedMemoryAccess_ClassInfo_, clinit$ScopedMemoryAccess, allocate$ScopedMemoryAccess);
	return class$;
}

$Class* ScopedMemoryAccess::class$ = nullptr;

		} // misc
	} // internal
} // jdk