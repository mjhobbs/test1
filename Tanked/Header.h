#pragma once

class Entity

{

	// property
	type of the entity
    globally unique id
};

Actor : Entity

	MoveableActor : Actor 

	Vehicle : MoveableActor

	Tank : Vehicle

	Bullet : MoveableActor



Vehicle that moves

		class Scene
		{
			list of entities

				updateallentities
				drawallentities
				handleInputforallentities

				addEntity
				removeEntity
				findEntityByID
		};



		class Entity
		{
			List of Components
		};

		class Components
		{
			activate
				handleMessage

		};

		class RenderComponent : Component
			class PhysicsComponent : Component
				class PathfindingComponent : Component
