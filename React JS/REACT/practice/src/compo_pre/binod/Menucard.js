import React from 'react';



const Menucard = ({menudata}) => {
    // console.log(menudata);
    return (
        <>
        <section className='main-card--cointainer'>
        {menudata.map((curele) => {
            const {id, name, catagory, image, discription} =curele
            return(
                <>
                <div className='card-container' key={curele.id}>
                <div className='card'>
                    <div className='card-body'>
                        <span className='card-number card-circle subtel'>{id}</span>
                        <span className='card-author subtel'>{name}</span>
                        <h2 className='card-title'>{name}</h2>
                        <span className='card-description subtel'>
                            Lorem, ipsum dolor sit amet consectetur adipisicing elit. Modi eveniet architecto natus magni saepe labore voluptatem officia accusantium dolorum hic eum expedita quod odit eaque unde, deleniti et repudiandae ullam!
                        </span>
                        <div className='card-read'>Read</div>
                    </div>
                    <img src={image} alt="" className='card-media' />
                    <span className='card-tag subtel'>order now</span>
                </div>
            </div>  
                </>
            )
        })}
        </section>
        </>
    );
};

export default Menucard;
