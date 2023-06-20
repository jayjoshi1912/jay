import React from 'react';
import Api from './api'
// import styled from 'styled-components'



function card(props) {
    return (
        <>
            <div className="main d-flex justify-content-evenly mt-5">


                {Api.map((rs)=>{
                    return(

                        <div className="card">
                <img src={rs.img} alt="" height={100} width={100}/>
                 <p>{rs.text}</p>
                </div>
                    )
                })}

            </div>
        </>
    );
}

export default card;