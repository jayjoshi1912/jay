import React from "react";
import { Carousel } from "react-responsive-carousel";
import "react-responsive-carousel/lib/styles/carousel.min.css";

function Slide(props) {
  return (
    <>
      <Carousel  autoPlay infiniteLoop interval={2000} showThumbs={false} showArrows={false} showStatus={false}>
        <div >
          <img src="img/s1.jpg" className="d-block w-100" alt="..."   />
        </div>
        <div >
          <img src="img/s2.jpg" className="d-block w-100" alt="..."    />
        </div>
        <div>
          <img src="img/s3.jpg" className="d-block w-100" alt="..."  />
        </div>
      </Carousel>

      {/* <div id="carouselExampleSlidesOnly" className="carousel slide" data-bs-ride="carousel">
  <div className="carousel-inner">
    <div className="carousel-item active">
      <img src="img/s1.jpg" className="d-block w-100" alt="..."/>
    </div>
    <div className="carousel-item">
      <img src="img/s2.jpg" className="d-block w-100" alt="..."/>
    </div>
    <div className="carousel-item">
      <img src="img/s3.jpg" className="d-block w-100" alt="..."/>
    </div>
  </div>
</div> */}
    </>
  );
}

export default Slide;
