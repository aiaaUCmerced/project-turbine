\# 3 Feb 2026

Summary of changes: Copied prior configuration, removed out-of-scope parts, remade top-level assembly

\## Top-Level Changes

Redid all mates for subcomponents

Added wing assembly consuming the foam structure, mounting brackets, and servos. This assembly was offset 2 inches from the front of the plane

Added nose assembly consuming the nose, propeller, tail, landing gear, and wheels.

\## Foam Structural Elements

Summary of changes: Adjusted reference geometry and conformed measurements to updated values.

\### Fuselage

Changed boss-extrude to be center rectangle centered at origin with front plane where the nose will go

Renamed reference planes to Beginning of Tail and End of Tail

Shelled out entire part to reflect foam thickness

\### Rudder

Extended height and actuator depth by 2" (not the final dimensions) and changed boss-extrude to midplane for ease of mating into assembly

\### Elevator

Extended width to 16", height to 7", and actuator depth to 2" (not final dimensions)

Changed boss-extrude to midplane and renamed back of elevator reference geometry

\## 3D Printed Structural Elements

Summary of changes: Revised nose and front landing gear

\### Nose

Extended insert to cover the entirety of the top and sides of the fuselage walls. Increased dimensions to reflect standard 4x2 form factor for the inside of the fuselage. 

\### Landing Gear

Completely revised design to clamp around the side wall and nose insert. Landing gear now split into a left and right half, with wheelbase widened to increase stability. 

\### Propeller

Added disk configuration to visually demonstrate swept area. 

\### Landing Gear End Caps

Simplified design to a basic cylinder to reflect revised manufacturing method: glue-on instead of screw-on

