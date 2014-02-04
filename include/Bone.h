#ifndef _Bone_h_
#define _Bone_h_

#include "SceneGraphNode.h"

namespace jester {

	class Bone : public SceneGraphNode {
	public:
		enum BoneId {
		 HEAD = 0,
		 NECK,
		 SHOULDER_L,
		 SHOULDER_R,
		 ELBOW_L,
		 ELBOW_R,
		 HAND_L,
		 HAND_R,
		 TORSO,
		 HIP_L, 
		 HIP_R,
		 KNEE_L,
		 KNEE_R,
		 FOOT_L,
		 FOOT_R,
		 BONE_COUNT
		};


		virtual void suggestPosition();
		BoneId getType();
		Bone(SceneGraphNode *parent, BoneId type);
		~Bone();
	private:
		BoneId kType;
	};
};

#endif